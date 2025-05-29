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

        vector<int>arr;

        int sum = 0;

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            
            arr.push_back(a);

            if(i%2==0)
            {
                sum += arr[i];
            }
            else
            {
                sum -= arr[i];
            }
        }

        cout<<sum<<endl;





    }
}