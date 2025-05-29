#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int size = s.size();

        int l_Zero = size-1;

        for(int i=size-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                l_Zero = i;
            }

        }

        int ans = 0;
        for(int i=l_Zero;i>=0;i--)
        {
            ans++;
            if(s[i]=='1')
            {
                break;
            }
            
        }
        cout<<ans<<endl;








    }






    return 0;
}