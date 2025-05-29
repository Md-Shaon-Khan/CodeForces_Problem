#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int len = s.length();
    int count=0;

    for(int i=0;i<len;i++)
    {
        if(s[i]=='"')
        {
             ++count;
        }

        
        if(count%2==0)
        {
            if(s[i]==',')
            {
                s[i] = '.';
            }
        }

    }


    cout<<s;
}