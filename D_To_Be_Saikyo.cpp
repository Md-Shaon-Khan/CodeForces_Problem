#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int number[n];

    for(int i=0;i<n;i++)
    {
        cin>>number[i];
    }

    int max = 0;

    for(int i=1;i<n;i++)
    {
        if(max<number[i])
        {
            max = number[i];
        }
    }

    if(number[0]>max)
    {
        cout<<"0";
    }
    else if(number[0]==max)
    {
        cout<<"1";
    }
    else
    {
        cout<<max-number[0]+1;
    }







    return 0;
}