#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;

        cin>>a>>b;

        if((b%2==1 && a%2==1) || (b%2==1 && a==0) || (a%2==1 && b==0) || (b%2==0 && a%2==1) )
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }






    }





    return 0;
}

