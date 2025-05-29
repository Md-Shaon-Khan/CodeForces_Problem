#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;

        x = x-a;
        y = y-b;
 
        
            if(x<0)
            {
                x = 0;
            }
            else if(y<0)
            {
                y = 0;
            }
            
        
        
            if((x+y)<=c)
            {
                cout<<"YES"<<endl;
            }
            else
            cout<<"NO"<<endl;
        







    }







    return 0;
}