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
        int sum = 0;

        sort(array,array+n);

        for(int i=1;i<n;i++)
        {
            sum += array[i] - array[i-1];
        }


        cout<<sum<<endl;








        t--;
    }






    return 0;
}