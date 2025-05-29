#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while (t != 0) 
    {
        string s;
        cin >> s;
        
        bool ans = true;
        int n = s.length();

        for (int j=0;j<n;j++) 
        {
            if ((j==0 || s[j]!=s[j-1]) && (j==n-1 || s[j]!=s[j+1])) 
            {
                ans = false;
                break;
            }
        }
        cout<<(ans ? "YES":"NO")<<endl;

        t--;
    }
    return 0;
}
