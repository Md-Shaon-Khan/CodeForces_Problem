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
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>array[i];

            if(array[i] % 2 != 0)
            {
                ++count;
            }
        }

        cout<<count<<endl;





        t--;
    }




    return 0;
}