#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int a, b, c;

        cin>>a>>b>>c;
        int count = 0;
        int sum = a+b+c;

        if(sum & 1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<min(a+b,sum/2)<<endl;
        }
        







        t--;
    }








    return 0;
}