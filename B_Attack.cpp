#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,sum=0;
    cin>>a>>b;

    sum = a/b ;
    if(a%b!=0)
    {
        sum += 1;
    }

    cout<<sum;
}