#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    // ll n,k;
    // cin>>n>>k;

    // vector<ll>arr(n);
    // for(ll i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }

    // while(k--)
    // {
    //     ll a,b;
    //     cin>>a>>b;

    //     ll sum = 0;
    //     for(ll i=a-1;i<b;i++)
    //     {
    //         sum += arr[i];
    //     }


    //     cout<<sum<<endl;

    // }

 

    ll n,t;
    cin >> n >> t;
    
    vector<ll> arr(n);
    vector<ll> prefix(n+1, 0);  

   
    for (ll i = 1; i <= n; i++) {
        cin >> arr[i-1];
        prefix[i] = prefix[i-1] + arr[i-1];
    }

    while (t--) {
        ll a, b;
        cin >> a >> b;

        
        cout << prefix[b] - prefix[a-1] << endl;
    }


}














   
