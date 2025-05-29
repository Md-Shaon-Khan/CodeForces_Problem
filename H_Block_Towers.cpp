#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;

    while (t != 0) 
    {
        int n;
        cin>>n;

        vector<long long>a(n);
        long long sum = 0;

        for (int i=0;i<n;++i) 
        {
            cin>>a[i];
            sum += a[i];
        }

        
        cout<<sum<<endl;

        t--;
    }

    return 0;
}
