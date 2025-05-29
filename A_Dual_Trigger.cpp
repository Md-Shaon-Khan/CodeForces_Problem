#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        
        int count=0,mn=n,mx=-1;
        bool ans = true;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                ++count;
                mn = min(mn,i);
                mx = max(mx,i);
            }

            
        }
        
        cout << (count % 2 == 1 || (count == 2 && mx-mn==1) ? "NO\n" : "YES\n");

        
        






    }






    return 0;
}