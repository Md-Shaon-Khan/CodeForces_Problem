#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;

    long long int array[n];

    for(long long int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    sort(array,array+n);
    int count=0;
    for(long long int i=0;i<n-1;i++)
    {
        if(array[i]==array[i+1])
        { 
            count = 1;
            break;

        }
    }
    if(count == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}