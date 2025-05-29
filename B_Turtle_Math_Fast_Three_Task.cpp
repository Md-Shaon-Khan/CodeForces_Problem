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
        
        int sum = 0;

        int one=0;
        int sec=0;
        for(int i=0;i<n;i++)
        {

            cin>>array[i];
            sum += abs(array[i]);
            if(array[i]%3==1)
            {
               one=1;
            }
            
        }
        

        if(sum%3==0)
        {
            cout<<"0"<<endl;
        }
        else if(sum%3==2)
        {
            cout<<"1"<<endl;
        }
        else
        {
            if(one==1)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
            
        }

        




        t--;

    }










    return 0;
}