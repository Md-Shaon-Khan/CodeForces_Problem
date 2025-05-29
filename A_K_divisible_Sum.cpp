#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        
            int m = (n+k-1)/k;
            k = k*m;
            cout<<(k+n-1)/n<<endl;
             //cout<<1<<endl;
    

    }







    return 0;
}
