#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int arr1[4],arr2[4];
        
        int p=-1;
        for(int i=0;i<4;i++)
        {
            cin>>arr1[i]>>arr2[i];
            
        }
        // for(int i=0;i<4;i++)
        // {
        //     cout<<arr1[i]<<" ";
            
        // }
        
        // cout<<"\n";
        for(int i=1;i<4;i++)
        {
            if(arr1[0]==arr1[i])
            {
                p = arr2[0] - arr2[i];
            }
            
        }

        p = p*p;

        cout<<p<<endl;






    }




    return 0;
}