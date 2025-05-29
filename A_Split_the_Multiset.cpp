#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        int a,b;
        cin>>a>>b;

        int op = 0;

        while(a > 1)
        {
             a = a - (b-1);
             ++op; 

        }


        cout<<op<<endl;
    }
}