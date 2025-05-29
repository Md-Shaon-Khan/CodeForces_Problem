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

    int min,a,b,c;

    min = abs(array[0] - array[n-1]);
    a = n;
    b = 1;

    for(int i=0;i<n-1;i++)
    {
        if(abs(array[i]-array[i+1])<min)
        {
            min = abs(array[i]-array[i+1]);
            a = i+1;
            b = i+2;
        }
    }

    cout<<a<<" "<<b;




    return 0;
}