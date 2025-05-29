#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n,s,m;
        cin>>n>>s>>m;

        bool ans = false;

        long long arr[n][2];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>arr[i][j];
            }
            

            if(arr[i][0]-arr[i-1][1]>=s && i!=0)
            {
                ans = true;
            }
            
        }
        if(arr[0][0]>=s)
            {
                ans = true;
            }
        if(m - arr[n-1][1]>=s)
        {
            ans = true;
        }

        if(ans)
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