#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while( t != 0)
    {
        long long int a,b,n;
        cin>>a>>b>>n;

        int count=0;

        while(max(a,b)<=n)
        {
            if(a<b)
            {
                a += b;
            }
            else
            {
                b += a;
            }
            ++count;
        }

        
        cout<<count<<endl;



        t--;
    }



    return 0;
}