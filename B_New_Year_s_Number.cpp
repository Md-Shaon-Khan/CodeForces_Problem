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

        if(a<2020)
        { 
            cout<<"NO"<<endl;

        }
        else
        {
            int count=0;
            while(a >= 2020)
            {
                if(a % 2020 ==0 || a%2021==0)
                {
                    cout<<"YES"<<endl;
                    ++count;
                    break;
                }
                else
                {
                    if(a%2==1)
                    {
                        a = a - 2021;
                    }
                    else
                    {
                        a = a - 2020;
                    }
                }
            }

            if(count==0)
            {
                cout<<"NO"<<endl;
            }
        }







        t--;
    }
}