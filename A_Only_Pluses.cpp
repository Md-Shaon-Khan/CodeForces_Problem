#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t != 0)
    {
        int a[3];
        
        for(int i=0;i<3;i++)
        {
              cin>>a[i];
        }

        int d=5;

        while(d != 0)
        {
            sort(a,a+3);

            a[0]++;




            d--;
        }

        int sum = a[0]*a[1]*a[2];

        cout<<sum<<endl;

        t--;
    }
    




    return 0;
}