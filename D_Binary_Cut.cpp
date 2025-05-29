#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        string s;
        cin>>s;

        int len = s.size();

        int div = 1;
        int ex = 0;

        for(int i=0;i<len-1;i++)
        {
            div += (s[i] != s[i+1]);
            ex |= (s[i]=='0' && s[i+1]=='1');
        }


        cout<<div-ex<<endl;






        t--;
    }









    return 0;
}