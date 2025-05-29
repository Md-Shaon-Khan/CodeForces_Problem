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

        int zero=0,one=0;

        int len = s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            else 
            {
                one++;
            }
        }
        
        int i;
        for(i=0;i<len;i++)
        {
            if(s[i]=='1')
            {
                if(zero>0)
                {
                    zero--;
                }
                else 
                {
                    break;
                }
            }
            else
            {
                if(one>0)
                {
                    one--;
                }
                else
                { 
                    break;
                }
            }
            
        }
        cout<<s.size()-i<<endl;
    }
    return 0;
}