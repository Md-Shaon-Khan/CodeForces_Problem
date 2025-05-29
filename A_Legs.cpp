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

        int count = 0 ;

        if(n%4==0)
        {
            count = n / 4 ;
        }
        else
        {
            count = (n/4) + 1;
        }


        cout<<count<<endl;










    }







    return 0;
}