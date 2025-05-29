#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    while(t != 0)
    {
        int n,d;
        cin>>n>>d;

        int array[n];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        sort(array,array+n);

        
        int count = 0;

        for(int i=0;i<n;i++)
        {
            if(array[i]>d)
            {
                ++count;
               
            }
            
                
            
        }

       int x = 0;

       if(array[n-1]<=d)
       {
        cout<<"YES"<<endl;
       }
       else
       {
       
           
           if(d<array[0]+array[1])
           {
              
               cout<<"NO"<<endl;
              
           }
           else
       {
        cout<<"YES"<<endl;
       }
       }

       

       
       









        t--;
    }








    return 0;
}