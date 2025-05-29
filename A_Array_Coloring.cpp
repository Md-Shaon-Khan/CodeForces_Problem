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

        int array[n];
        int count = 0;

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
            
            if(array[i]%2 != 0)
            {
               ++count;
            }
        }

        if(count % 2 == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }







        t--;
    }




    return 0;
}