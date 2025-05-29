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

        int array[n];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        
        int ex=0;
        if(array[0]!=array[1] && array[0]!=array[2])
        {
            ex = 1;
        }
        if(array[n-1]!=array[n-2] && array[n-1]!=array[n-3])
        {
            ex = n;
        }
        for(int i=1;i<n-1;i++)
        {
            if(array[i]!=array[i-1] && array[i]!=array[i+1])
            {
                ex = i+1;
                break;
            }
            

        }

        cout<<ex<<endl;
    }




    return 0;
}