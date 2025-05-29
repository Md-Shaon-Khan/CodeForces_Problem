#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;


    while(t--)
    {
        string s;
        cin>>s;

        int a1=0,a2=0,c=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                a1++;
            }
            else if(s[i]==')')
            {
                a2++;
            }
            else
            {
                c++;
            }
        }

        if(s.length()%2==0 && s[0]!=')' && s[s.length()-1]!='(')
        {
            if(c%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }












    }






    return 0;
}