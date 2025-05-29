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

        if(n>=m)
        {
            int o = n-m;

            if(o%2==0)
            cout<<"Yes\n";
            else
            cout<<"No\n";

        }
        else
        {
            cout<<"No\n";
        }








        t--;
    }







    return 0;
}