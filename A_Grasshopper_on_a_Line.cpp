#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>s;

    while(t != 0)
    {
        int x,k;
        cin>>x>>k;

        int sum = 0,count=0;

        if(x%k)
        {
            count = 1;
            sum = x;

            cout<<"1"<<endl<<x<<endl;
        }
        else
        {
            cout<<"2"<<endl<<x-1<<" "<<"1"<<endl;
           


        }


       
       









        t--;
    }









    return 0;
}