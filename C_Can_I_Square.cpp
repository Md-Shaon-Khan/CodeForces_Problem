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
        
        ll arr[n];
        ll sum = 0;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
            sum += arr[i];
        }

        ll root = sqrt(sum);
        root = root*root;
        if( root == sum)
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