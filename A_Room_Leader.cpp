#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    int sum=0;
    int max_value = -10000;
    string name,max;
    int arr[7];

    while(t--)
    {
        
        cin>>name;
        sum=0;
        
        

        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
            
        }

        sum += arr[0]*100 - arr[1]*50;
        for(int i=2;i<7;i++)
        {
            sum += arr[i];
            
        }

        if(sum > max_value)
        {
             max_value = sum;
             max = name;
        }

        //cout<<sum<<endl;



    }

    cout<<max;







    return 0;
}