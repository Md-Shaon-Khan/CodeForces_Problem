#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    long long int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    } 
    cout<<array[0]<<" ";
    for(int i=1;i<n;i++)
    {
        cout<<array[i]-array[i-1]<<" ";
    }

    return 0;
}