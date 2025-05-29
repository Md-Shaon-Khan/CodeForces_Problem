#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define ll long long
int main()
{
    int arr[64];
    unsigned ll sum = 0;
    for(int i=0;i<64;i++)
    {
        cin>>arr[i];
        //sum += arr[i]*pow(2,i);
         //if(arr[i]==1)
         //sum += 1LL<< i;
    }
     for(int i=0;i<64;i++)
     {
        
         //sum += arr[i]*pow(2,i);
          if(arr[i]==1)
          sum += (1LL<<i);
     }

    cout<<sum;

    

}