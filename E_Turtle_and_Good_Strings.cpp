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

        string s;
        cin>>s;
        
        int count = 0;

        for(int i=0;i<n-1;i++)
        {
            if (s[0]==s[n-1])
            {
               count++;
            }
        }
        if(count==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }





    }





    return 0;
}