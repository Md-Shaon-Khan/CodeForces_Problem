#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
       
       arr.push_back(a);

       
    }

    int maax = *max_element(arr.begin(),arr.end());
    int miin = *min_element(arr.begin(), arr.end());

    int count=0;

    for(int i=1;i<n-1;i++)
    {
        if(arr[i]>miin && arr[i]<maax)
        {
            ++count;
        }
       
    }
    
    cout<<count;

    return 0;
}