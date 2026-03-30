#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (auto &x : a)
      cin >> x;
    for (auto &x : b)
      cin >> x;

    vector<ll> d(n - 1);
    for (int i = 0; i < n - 1; i++)
      d[i] = __gcd(a[i], a[i + 1]);

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
      ll L = (i > 0) ? d[i - 1] : 0LL;
      ll R = (i < n - 1) ? d[i] : 0LL;
      ll need;
      if (L == 0)
        need = R;
      else if (R == 0)
        need = L;
      else
      {
        ll g = __gcd(L, R);
        need = L / g * R;
      }
      if (need < a[i])
        ans++;
    }
    cout << ans << "\n";
  }
  return 0;
}