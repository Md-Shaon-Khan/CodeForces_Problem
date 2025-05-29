#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p>>q;

    long long int arr[n];
    int min = 1000000;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<min)
        {
             min = arr[i];
        }
    }

    if((q+min)<p)
    {
        cout<<q+min;
    }
    else
    {
        cout<<p;
    }
     





    return 0;
}