#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int sum = 0;
        for(int i=a;i<=b;i++)
        {
            sum += array[i];
        }
        cout<<sum<<endl;
    }

}