#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,d;
    cin>>t>>d;

    int count = 0;
    while(t--)
    {
        

        long long int a,b;
        cin>>a>>b;

        long long int sum = a*a + b*b;
        if(sum<=d*d)
        {
            ++count;
        }
    }

    cout<<count;
}