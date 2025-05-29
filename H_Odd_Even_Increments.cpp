#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];
        int even=0,odd=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        for(int i=0;i<n;i=i+2)
        {
            if(arr[0]%2!=arr[i]%2)
            {
                even = 1;
                break;
            }
        }
        for(int i=1;i<n;i=i+2)
        {
            if(arr[1]%2!=arr[i]%2)
            {
                odd = 1;
                break;
            }
        }

        if(even==1 || odd==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }














    }









    return 0;
}