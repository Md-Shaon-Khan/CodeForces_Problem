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

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        sort(array,array+n);

        array[0] += 1;

        int sum = 1;

        for(int i=0;i<n;i++)
        {
            sum *= array[i];
        }

        cout<<sum<<endl;




        t--;
    }




    return 0;
}