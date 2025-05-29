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

        int i=0, j=n-1;

        while(i<n-1 && array[i] == array[i+1])
        {
            i++;
        }
        while(j >=1 && array[j] == array[j-1])
        {
            j--;
        }

        if(array[0] == array[n-1])
        {
            cout<<max(j-i-1,0)<<endl;
        }
        else
        {
            cout<<max(min(n-i-1,j),0)<<endl;
        }
    }



    return 0;
}