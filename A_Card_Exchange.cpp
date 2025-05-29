#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n,k,count,count1=0;

        
        cin>>n>>k;
        
        int array[n];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
           
        sort(array, array+n);

        for(int i=0; i<n-1; i++)
        {
            count=0;

            for(int j=i+1; j<n; j++)
            {
                if(array[i]==array[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
                   
                if(count==k-1)
                {
                    cout<<k-1<<endl;
                    count1++;
                    break;
                }
            }
            if(count1>0)
            {
                break;
            }
                
            
        }
        if(count1==0)
        {
             cout<< n<<endl;
        }
          
    }
    return 0;
}