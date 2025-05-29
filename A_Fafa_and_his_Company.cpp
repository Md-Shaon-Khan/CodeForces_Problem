#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int count = 0;

    for(int i=1;i<n;i++)
    {
        int x;
        x = n;
        if((x-i)%i==0 && ((x-i)!=0))
        {
            ++count;
        }
    }

    cout<<count;





    return 0;
}