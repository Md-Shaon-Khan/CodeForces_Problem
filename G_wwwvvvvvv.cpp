#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int len = s.length();
    int count=0;

    for(int i=0;i<len;i++)
    {
        if(s[i]=='w')
        {
             ++count;
        }
    }

    len += count;

    cout<<len;



    return 0;
}