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

        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        
        vector<int>arr;

        for(int i=0;i<n;i=i+2)
        {
            int x = array[i];
            arr.push_back(x);

        }

        sort(arr.begin(),arr.end());

        int size = arr.size();

        int max = arr[size-1];
        cout<<max<<endl;



    }



    return 0;
}