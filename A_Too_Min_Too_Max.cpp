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

        long long int sum = abs(array[0]-array[n-1]) + abs(array[n-1] - array[1]) + abs(array[1] - array[n-2]) + abs(array[n-2] - array[0]);

        cout<<sum<<endl;




        t--;
    }





    return 0;
}