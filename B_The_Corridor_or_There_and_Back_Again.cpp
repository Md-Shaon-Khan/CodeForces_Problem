#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        vector< pair<long long,long long>>v;

        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;

            v.push_back({a,b});


        }
        
        long long int k = INT_MAX;
        for(long long i=0;i<n;i++)
        {
            k = min (v[i].first + (v[i].second-1)/2,k);
        }

        cout<<k<<endl;







    }








    return 0;
}