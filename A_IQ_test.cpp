#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int e,o,en=0,on=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ++en;
            e = i+1;
        }
        else
        {
            ++on;
            o = i+1;
        }
    }
    en>on?cout<<o:cout<<e;




}