#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long ans=0,mx=0;
        for(int i=0;i<k;i++)
        {
            long long x;
            cin>>x;
            mx=max(mx,2LL*x-1);
            ans+=2LL*x-1;
        }
        cout<<ans-mx<<endl;
    }
    return 0;
}