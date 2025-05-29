#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n,m;
        cin>>n>>m;

        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,count=0;

        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='A')
            {

                ++a;
            }
            else if(s[i]=='B')
            {
                ++b;
            }
            else if(s[i]=='C')
            {
                ++c;
            }
            else if(s[i]=='D')
            {
                ++d;
            }
            else if(s[i]=='E')
            {
                ++e;
            }
            else if(s[i]=='F')
            {
                ++f;
            }
            else if(s[i]=='G')
            {
                ++g;
            }

             
        }
        if(m>a)
        count += m - a;
        if(m>b)
        count += m-b;
        if(m>c)
        count += m-c;
        if(m>d)
        count += m-d;
        if(m>e)
        count += m-e;
        if(m>f)
        count += m-f;
        if(m>g)
        count += m-g;



         cout<<count<<endl;






        t--;
    }
}