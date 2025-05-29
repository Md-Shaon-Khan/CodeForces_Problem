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

        int sum = 0,temp;
        temp = n;
        while(temp!=0)
        {
            
            sum += (temp%10);
            temp = temp / 10;
        }

        cout<<sum<<endl;
    }





    return 0;
}