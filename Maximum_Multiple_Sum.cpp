#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int a;

        cin>>a;
        
        int k = 2;
        int sum = 0;

        for(int i=2;i<=a;i++)
        {
            int sum1 = 0;
            for(int j=1;j*i<=a;j++)
            {
                sum1 += i*j;
            }

            if(sum1>sum)
            {
                sum = sum1;
                k = i;
            }
        }


        cout<<k<<endl;


        t--;
    }




    return 0;
}