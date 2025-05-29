#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int count = 1,res = 1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>k)
            {
               count=1;
            }
            else
            {
                count++;
            }

            if(count > res)
            {
                res = count ;
            }
        }
        
        cout<<n-res<<endl;






    }

}