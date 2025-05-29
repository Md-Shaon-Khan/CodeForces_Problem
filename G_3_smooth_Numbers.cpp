#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    while(n%2==0 || n%3==0)
    {
        if(n%2==0)
        {
            n /= 2;
        }
        else if(n%3==0)
        {
            n /= 3;
        }
        if(n==1)
        {
            break;
        }
    }

    if(n==1)
    {
        cout<<"Yes";
    } 
    else
    {
        cout<<"No";
    }






    return 0;
}