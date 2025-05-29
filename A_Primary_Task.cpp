#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a;
        cin>>a;

        int s = trunc(log10(a)) + 1;
        //cout<<s<<endl;
        bool ans = true;
        int f = 1;
        for(int i=1;i<s;i++)
        {
             f *= 10;
        }
        //cout<<f<<endl;
        if(a/f!= 1)
        {
           ans = false;
        }

        a = a%f;
        //cout<<f<<endl;
       // cout<<a<<endl;


        int b = trunc(log10(a)) + 1;


        if(a<2 || b!=(s-2))
        {
            ans = false;
        }

        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        




        //cout<<ans<<endl;;



    }





    return 0;
}