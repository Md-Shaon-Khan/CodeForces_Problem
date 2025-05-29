#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        char a[3],b[3];

        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<3;i++)
        {
            cin>>b[i];
        }

        char ch;

        ch = a[0];
        a[0] = b[0];
        b[0] = ch;

        for(int i=0;i<3;i++)
        {
            cout<<a[i];
        }
        cout<<" ";
        for(int i=0;i<3;i++)
        {
            cout<<b[i];
        }
        cout<<endl;








        t--;
    }




    return 0;
}