#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

   
    
        int arr1[t],arr2[t];

    for(int i=0;i<t;i++)
    {
        cin>>arr1[i]>>arr2[i];
    }
    int sum = 0,min=arr2[0];

    for(int i=0;i<t;i++)
    {
        if(min>arr2[i])
        {
            min= arr2[i];
        }

        sum += arr1[i]*min;
    }

    cout<<sum;
    



    return 0;
}