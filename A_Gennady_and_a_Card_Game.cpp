#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    string a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    bool yes = false;

    char b = s[0];
    char c = s[1];

    for(int i=0;i<5;i++)
    {

        if( b== a[i][0] || c == a[i][1])
        {
            yes = true;
            break;

        }
    }

    if(yes)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }




    return 0;
}