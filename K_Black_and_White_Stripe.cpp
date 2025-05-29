#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n,k;
        cin>>n>>k;

        char ch[n];
        for(int i=0;i<n;i++)
        {
            cin>>ch[i];

        }
        int n=0,count=0;

        for(int i=0;i<n-1;i++)
        {
            if(ch[i]==ch[i+1] && ch[i]=='B')
            {
                ++count;
            }
            else
            {
                count = 0;
            }
            if(count>n)
            {
                n = count;
            }
        }







        t--;
    }
}