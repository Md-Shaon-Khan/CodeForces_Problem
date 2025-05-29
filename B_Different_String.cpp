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
        string x = s;

        sort(s.begin(),s.end());

        if(s!=x)
        {
            cout<<"YES\n"<<s<<endl;

        }
        else
        {
            reverse(s.begin(),s.end());

            if(x==s)
            {
                cout<<"NO\n";
            }
            else 
            cout<<"YES\n"<<s<<endl;
           
        }









        t--;
    }







    return 0;
}