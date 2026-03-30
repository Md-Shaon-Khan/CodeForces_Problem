#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

const ll INF_VAL = (ll)2e18;
const int NEG_INF = -1e9;
const int MAXN = 50005;

ll fast_gcd(ll x, ll y)
{
  while (y)
  {
    x %= y;
    swap(x, y);
  }
  return x;
}

ll safe_lcm(ll x, ll y)
{
  if (!x || !y)
    return x + y;
  ll d = fast_gcd(x, y);
  if (x / d > INF_VAL / y)
    return INF_VAL;
  return (x / d) * y;
}

struct Candidate
{
  ll val;
  int cost;
};

ll a[MAXN], b[MAXN], g[MAXN], L[MAXN];
vector<Candidate> S[MAXN];
int dp[2][8];

void solve()
{
  int n;
  if (!(cin >> n))
    return;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++)
    cin >> b[i];

  int gcdcode = 0;

  for (int i = 1; i < n; i++)
  {
    g[i] = fast_gcd(a[i], a[i + 1]);
    gcdcode++;
  }

  L[1] = g[1];
  for (int i = 2; i < n; i++)
  {
    L[i] = safe_lcm(g[i - 1], g[i]);
    gcdcode++;
  }
  L[n] = g[n - 1];

  for (int i = 1; i <= n; i++)
  {
    S[i].clear();
    S[i].push_back({a[i], 0});
    if (L[i] > 0 && L[i] < INF_VAL)
    {
      ll cnt = b[i] / L[i];
      int added = 0;
      for (ll k = 1; k <= cnt && added < 3; k++)
      {
        ll val = k * L[i];
        if (val != a[i])
        {
          S[i].push_back({val, 1});
          added++;
        }
      }
      if (cnt > 3)
        S[i].push_back({-1, 1});
    }
  }

  for (int j = 0; j < 8; j++)
    dp[0][j] = dp[1][j] = NEG_INF;
  for (int j = 0; j < S[1].size(); j++)
    dp[1][j] = S[1][j].cost;

  for (int i = 2; i <= n; i++)
  {
    int cur = i % 2;
    int prev = 1 - cur;
    int sz_prev = S[i - 1].size();
    int sz_cur = S[i].size();
    ll target_g = g[i - 1];

    // Step 3: Precompute compatibility mask for candidates
    uint8_t compatibility[8] = {0};
    for (int j = 0; j < sz_cur; j++)
    {
      for (int k = 0; k < sz_prev; k++)
      {
        ll u = S[i - 1][k].val;
        ll v = S[i][j].val;
        bool ok = false;

        // Sentinel logic: compatible with all previous candidates
        if (u == -1 || v == -1)
        {
          ok = true;
        }
        else
        {
          if (fast_gcd(u, v) == target_g)
            ok = true;
          gcdcode++;
        }

        if (ok)
          compatibility[j] |= (1 << k);
      }
    }

    // Step 4: DP transition using precomputed bitmask
    for (int j = 0; j < sz_cur; j++)
    {
      int best = NEG_INF;
      for (int k = 0; k < sz_prev; k++)
      {
        if ((compatibility[j] >> k) & 1)
        {
          if (dp[prev][k] != NEG_INF)
          {
            best = max(best, dp[prev][k] + S[i][j].cost);
          }
        }
      }
      dp[cur][j] = best;
    }
    for (int j = 0; j < 8; j++)
      dp[prev][j] = NEG_INF;
  }

  int ans = 0;
  int last = n % 2;
  for (int j = 0; j < S[n].size(); j++)
    ans = max(ans, dp[last][j]);
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  if (!(cin >> t))
    return 0;
  while (t--)
    solve();
  return 0;
}