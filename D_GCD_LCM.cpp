#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t!=0)
    {
        int a,b;
        cin>>a>>b;


        if(b%a==0)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }


        t--;
    }






    return 0;
}