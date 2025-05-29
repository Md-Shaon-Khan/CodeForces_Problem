#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int array[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array[i][j];
            if(array[i][j]!=0)
            {
                cout<<j+1<<" ";
            }
        }
        cout<<endl;
    }






    return 0;
}