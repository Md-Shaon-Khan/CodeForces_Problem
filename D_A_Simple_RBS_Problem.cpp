#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_simple(const string &s, int k)
{
  int n = s.length();
  // The core soup starts at index k and ends at n-k-1
  for (int i = k; i < n - k; i += 2)
  {
    if (s[i] != '(' || s[i + 1] != ')')
      return false;
  }
  return true;
}

int get_shells(const string &s)
{
  int n = s.length();
  int bal = 0;
  int min_bal = n;
  for (int i = 0; i < n - 1; ++i)
  {
    if (s[i] == '(')
      bal++;
    else
      bal--;
    if (i == 0)
      min_bal = bal;
    else
      min_bal = min(min_bal, bal);
  }
  return min_bal;
}

void solve()
{
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;

  int ks = get_shells(s);
  int kt = get_shells(t);

  if (ks != kt)
  {
    cout << "NO" << endl;
    return;
  }

  if (ks == n / 2)
  {
    cout << "YES" << endl;
    return;
  }

  if (is_simple(s, ks) != is_simple(t, kt))
  {
    cout << "NO" << endl;
  }
  else
  {
    cout << "YES" << endl;
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}