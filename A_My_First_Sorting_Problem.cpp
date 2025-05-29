#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int x,y;
        cin>>x>>y;

        if(x > y)
        {
            cout<<y<<" "<<x<<endl;

        }
        else
        {
            cout<<x<<" "<<y<<endl;
        }






        t--;
    }








    return 0;
}