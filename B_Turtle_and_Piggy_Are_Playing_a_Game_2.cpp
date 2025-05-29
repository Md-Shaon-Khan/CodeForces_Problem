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
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }

        sort(arr+1,arr+n+1,greater<int>());

        cout<<arr[(n+1)/2]<<endl;






    }




    return 0;
}