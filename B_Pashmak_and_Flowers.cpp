#include<bits/stdc++.h>
using namespace std;
//#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
   // fast_io;
    long long int n;
    cin>>n;

    vector<long long>array(n);

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    sort(array.begin(),array.end());

    

    long long int count1=1,count2=1;

    if(array[0]==array[n-1])
    {
        cout<<array[n-1]-array[0]<<" "<<((n-1)*n)/2<<endl,0;
    }
    else
    {
         for(int i=1;i<n-1;i++)
    {
        if(array[0]==array[i])
        {
            ++count1;
        }
        if(array[n-1]==array[i])
        {
            ++count2;
        }
    }

    cout<<array[n-1]-array[0]<<" "<<count1*count2;
    }
   







    return 0;
}