#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    char array[a][b];

    int count=0;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>array[i][j];

            
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(array[i][j]=='#')
            ++count;

            
        }
    }

    cout<<count;
}