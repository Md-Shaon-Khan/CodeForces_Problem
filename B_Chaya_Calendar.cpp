#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        vector<int>arr(n);

        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
           
        }

        ll count = arr[0];

        for(ll i=1;i<n;i++)
        {
            if(arr[i]>count)
            {
                count += (arr[i]-count);
            }
            else
            {
                ll x = arr[i];
                // while(arr[i]<=count)
                // {
                //     arr[i] += x;
                // }

                //count += (arr[i]-count);
                ll next = ((count + arr[i]) / arr[i]) * arr[i];
                count = next;
            }
        }

        cout<<count<<endl;









    }







    return 0;
}