#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    if(s[0]=='A' && s[1]=='C' && s[2]=='E')
    {
        cout<<"Yes";
    }
    else if(s[0]=='B' && s[1]=='D' && s[2]=='F')
    {
        cout<<"Yes";
    }
    else if(s[0]=='C' && s[1]=='E' && s[2]=='G')
    {
        cout<<"Yes";
    }
    else if(s[0]=='D' && s[1]=='F' && s[2]=='A')
    {
        cout<<"Yes";
    }
    else if(s[0]=='E' && s[1]=='G' && s[2]=='B')
    {
        cout<<"Yes";
    }
    else if(s[0]=='F' && s[1]=='A' && s[2]=='C')
    {
        cout<<"Yes";
    }
    else if(s[0]=='G' && s[1]=='B' && s[2]=='D')
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }





    return 0;
}