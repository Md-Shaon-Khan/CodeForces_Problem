#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        int n,x,ano=0;
        cin>>n;
        int arr[n];
       int array[n];
       
        for(int i=1;i<=n;i++)
        {
           
            
            array[i]=0;
        }
        

        for(int i=1;i<=n;i++)
        {
           
            cin>>x;
            ++array[x];
        }

        for(int i=1;i<=n;i++)
        {
            if(array[i]%2==1)
            {
                cout<<"YES"<<endl;
                ano++;
                break;

            }
        }
        
        if(ano == 0)
        {
            cout<<"NO"<<endl;
        }
        // sort(arr.begin(),arr.end());

        // int total = 1,ano=0;
        
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(arr[i]==arr[j])
        //         {
        //             ++total;
        //         }
                
        //     }
        //     if(total%2==1)
        //     {
        //         cout<<"YES"<<endl;
        //         ++ano;
        //         break;

        //     }
        //     else
        //     {
        //         total=1;
        //     }
            
        // }

        // if(ano==0)
        // {
        //     cout<<"NO"<<endl;
        // }
            
    }
        

    return 0;
}