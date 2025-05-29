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

        string s;
        cin>>s;

        for(int i=0;i<n;i++)
        {
            char a = s[i];
            for(int j=0;j<n;j++)
            {
                if(a==s[j] && (s[j]>='a' && s[j]<='z') && j%2==0)
                {
                    s[i]='1';
                }
                else if(a==s[j] &&(s[j]>='a' && s[j]<='z') && j%2==1)
                {
                     s[i]='0';
                }

            }
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[i+1])
            {
                  ++count;
                  break;
            }
        }
        if(count ==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }








    }









    return 0;
}