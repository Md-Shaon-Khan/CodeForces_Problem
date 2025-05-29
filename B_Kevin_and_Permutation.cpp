#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while( t != 0)
    {
        int n;
        cin>>n;

        int v = ( n/2 )  + 1;

        for(int i=1;i<=n/2;i++)
        {
            cout<<v<<" "<<i<<" ";
            v++;
        }

        if(n&1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<endl;
        }






        t--;
    }



    return 0;
}