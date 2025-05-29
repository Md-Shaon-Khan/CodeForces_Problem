#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> s(2);
    for (auto& x : s) 
    cin >> x;
    int ans = 0;
    for(int i=0;i<2;i++)
        {
            for(int j=1;j<n-1;j++)
            {
                if(i==0)
                {
                   if(s[i][j]=='.' && s[i][j-1]=='.' && s[i][j+1]=='.' && s[i+1][j]=='.' && s[i+1][j-1]=='x' && s[i+1][j+1]=='x')
                   ans++;
                }
                else
                {
                   if(s[i][j]=='.' && s[i][j-1]=='.' && s[i][j+1]=='.' && s[i-1][j]=='.' && s[i-1][j-1]=='x' && s[i-1][j+1]=='x')
                   ans++;
                }
            }
        }
    cout << ans << '\n';
  }
}