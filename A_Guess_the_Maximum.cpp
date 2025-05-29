#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n;
        cin>>n;

        long long int array[n];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        

        vector<int>arr;
        int k;

        for(int i=0;i<n-1;i++)
        {
            k = max(array[i],array[i+1]);
            arr.push_back(k);
        }
        
        int siz = arr.size();

        sort(arr.begin(),arr.end());

        

        cout<<arr[0]-1<<endl;







        t--;
    }
}