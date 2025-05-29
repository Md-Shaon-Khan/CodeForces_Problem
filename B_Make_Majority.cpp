#include <bits/stdc++.h>
using namespace std;
int main() 
{
  
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k1 = 0;
    int k0 = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '1') {
        k1 += 1;
      } else {
        if (i == 0 || s[i - 1] == '1') {
          k0 += 1;
        }
      }
    }
    cout << (k1 > k0 ? "Yes" : "No") << '\n';
  }
  return 0;
}