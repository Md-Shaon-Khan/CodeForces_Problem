#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;

    while (t--) 
    {
        int n;
        cin>>n;

        vector<int> x(n);

        for (int i=0;i<n;i++) 
        {
            cin>>x[i];
        }
        if(x[n-1]-x[0]-n <= 1) 
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
