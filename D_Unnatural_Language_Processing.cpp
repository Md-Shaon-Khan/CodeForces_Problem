#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n;
        cin>>n;

        string ch;
        cin>>ch;

        string res="";

        while(!ch.empty())
        {
            int x;
            if(ch.back()=='a'||ch.back()=='e')
            {
                x=2;
            }
            else
            {
                x=3;
            }

            while(x--)
            {
                res += ch.back();
                ch.pop_back();
            }

            res +=".";
        }

        res.pop_back();

        reverse(res.begin(),res.end());

        cout<<res<<"\n";





        t--;
    }










    return 0;
}