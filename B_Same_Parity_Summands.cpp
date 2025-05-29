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

        if((n-(2*(k-1)))%2==0 && (n-(2*(k-1)))>=2)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<k;i++)
            {
                cout<<2<<" ";
            }
            cout<<(n-(2*(k-1)))<<endl;

        }
        else if((n-(1*(k-1)))%2==1 && (n-(1*(k-1)))>=1)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<k;i++)
            {
                cout<<1<<" ";
            }
            cout<<(n-(1*(k-1)))<<endl;

        }
        else
        {
            cout<<"NO"<<endl;
        }









    }




    return 0;
}