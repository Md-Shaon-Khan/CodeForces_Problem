#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n,f,k;
        cin>>n>>f>>k;
        
        int array[n];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        f = array[f-1];

        sort(array,array+n,greater<int>());

        int count=0,count1=0;

        for(int i=k;i<n;i++)
        {
            if(array[i]==f)
            {
                ++count;
            }
        }
        for(int i=0;i<k;i++)
        {
            if(array[i]==f)
            {
                ++count1;
            }
        }

        if(count==0)
        {
            cout<<"YES"<<endl;
        }
        if(count != 0 && count1 != 0)
        {
            cout<<"MAYBE"<<endl;
        }
        if(count != 0 && count1 == 0)
        {
            cout<<"NO"<<endl;
        }


        t--;
    }


    return 0;
}