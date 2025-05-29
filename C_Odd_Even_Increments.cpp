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

        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }

        int odd,even,countE=0,countO=0;

        odd = arr[0] % 2;
        even = arr[1] % 2;

        for(int i=0;i<n;i++)
        {
            if(i%2==1)
            {
                if((arr[i]%2)!=even)
                {
                   ++countE;
                }
            }
            if(i%2==0)
            {
                if((arr[i]%2)!=odd)
                {
                   ++countO;
                }
            }
        }

        if(countE!=0 || countO!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }





    }




    return 0;
}