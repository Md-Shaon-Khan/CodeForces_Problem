#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s1,s2;
        cin>>s1>>s2;

        int count1,count2;

        for(int i=0;i<n;i++)
        {
            if(s1[i]=='1')
            {
                ++count1;
            }
            if(s2[i]=='1')
            {
                ++count2;
            }
        }
        int ans = 0;
        while(count1 != count2)
        {
            int c = 0;
            for(int i=0;i<n;i++)
            {
                
                if(s2[i]=='1' && s1[i]=='0')
                {
                    s1="1";
                    ++ans;
                    --count1;

                    
                }
                
            }

        }

        for(int i=0;i<n;i++)
        {
            if(s1[i]!=s2[i])
            {
                ++ans;
            }
        }

        cout<<ans<<endl;









    }
}