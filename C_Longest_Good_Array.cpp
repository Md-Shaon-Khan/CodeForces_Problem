#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        
        long long sum = b-a;

        if(sum<=2 && sum != 0)
        {
            cout<<2<<endl;
        }
        else if(sum == 0)
        {
            cout<<1<<endl;
        }
        else
        {
            int count  = 0;
            int i = 1;
            while(a <= b )
            {

                
                a += i;
                ++i;
                ++count;


            }
            cout<<count<<endl;
        }






    }







    return 0;
}