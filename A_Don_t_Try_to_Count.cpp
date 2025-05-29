#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n,m;
        cin>>n>>m;

        string a,b;
        cin>>a>>b;

        int count=0;

        while(a.find(b) == -1 && (count==0 || a.size()< 2*m))
        {
            ++count;
            a += a;

        }

        if(a.find(b) == -1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<count<<endl;
        }











        t--;
    }






    return 0;
}