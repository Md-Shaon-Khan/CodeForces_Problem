#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) 
    {
        int n;
        cin >> n;
        
        map<string, int> s;
        string strings[3][n];
        
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                cin >> strings[i][j];
                s[strings[i][j]]++;
            }
        }
        
        for (int i = 0; i < 3; i++) 
        {
            int ans = 0;
            for (int j = 0; j < n; j++) 
            {
                if (s[strings[i][j]]==1) 
                {
                    ans += 3;
                } 
                else if 
                (s[strings[i][j]]==2) 
                {
                    ans++;
                }
            }
            cout << ans << ' ';
        }
        cout << '\n';
    }

    return 0;
}
