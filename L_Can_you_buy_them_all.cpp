#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;

    cin>>n>>x;

    int array[n];
    
    int total=0;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

        if(i%2==0)
        {
            total += array[i];
        }
        else
        {
            total += array[i] -1;

        }

    }

    if(total <= x)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }




    return 0;
}