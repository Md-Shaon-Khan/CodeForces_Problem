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

        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;

            arr.push_back(a);
        }

        int maax = *max_element(arr.begin(), arr.end());


        int b = -1;

        for(int i=0;i<n;i++)
        {
            // if((i==0 && arr[i]>arr[i+1]) || (i==n-1 && arr[i]>arr[i-1]))
            // {
            //      b = i+1;
            //      break;

            // }
            // else 
            if(arr[i]==maax && (i>0 && (arr[i-1]<maax )|| (i<n-1&&arr[i+1]<maax)))
            {
                b = i+1;
                break;
            }
            else if((arr[i-1]==maax && arr[i+1]==maax))
            {
                continue;
            }

        }

        cout<<b<<endl;



    }





    return 0;
}