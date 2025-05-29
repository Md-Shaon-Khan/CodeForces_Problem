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

        int array[n],sum=0;

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
            sum += array[i];
        }

        sum /= n;
        int count=0;

        for(int i=0;i<n-1;i++)
        {
            if(array[i]<sum)
            {
                cout<<"NO"<<endl;
                ++count;
                break;
            }

            array[i+1] += array[i] - sum;
            array[i] = sum; 

        }
        
        if(count==0)
        {
            cout<<"YES"<<endl;
        }

        








        t--;
    }





    return 0;
}