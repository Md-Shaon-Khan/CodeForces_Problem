#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int j=1;j<=t;j++)
    {
        int a,b,sum=0;
        cin>>a>>b;

        for(int i=a;i<=b;i++)
        {
            if(i%2==1)
            {
               sum += i;
            }
           
        }

       cout<<"Case "<<j<<": "<<sum<<endl;


       
    }




    return 0;
}