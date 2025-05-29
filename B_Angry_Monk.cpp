#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    while(t!=0)
    {
        long long int n,k;
        cin>>n>>k;
        
        long long arr[k];

        for(int i=0;i<k;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+k);

        long long int sum = 0;

        for(long long int i=0;i<k-1;i++)
        {
            if(arr[i]>1)
            {
                sum += arr[i]-1;
            }
            
        }
        for(long long int i=0;i<k-1;i++)
        {
                sum += arr[i];
        }

        cout<<sum<<endl;



        t--;

        
    }







    return 0;
}