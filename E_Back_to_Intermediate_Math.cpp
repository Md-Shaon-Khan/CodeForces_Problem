#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        float d,u,v;
        cin>>d>>v>>u;

         if(d==0 || v==0 || u<=v)
         cout<<"Case "<<i<<": can't determine\n";
         else
         {

            float t1 = d / u;
        
        float a = sqrt(u*u - v*v);
        float t2 = d / a;

        t1 = abs(t1-t2);

        cout<<fixed;


        cout<<"Case "<<i<<": "<<setprecision(3)<<t1<<endl;



         }
        

       
    }
}