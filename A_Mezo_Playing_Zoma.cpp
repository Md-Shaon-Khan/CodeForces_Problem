#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

   
        string s;
        cin>>s;

        int len = s.size();
        int L=0,R=0;

        for(int i=0;i<len;i++)
        {
            if(s[i]=='L')
            { 
                ++L;
            }
            else
            {
                ++R;
            }
        }

        cout<<L+R+1<<endl;






    





    return 0;
}