#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int ans = -1;
        int a,b;
        cin>>a>>b;

        int c = -1;

        int d = 2;
            for(int i=a;i<=b;i++)
            {
                if(a*d<=b)
                {
                   c = a*d;
                   d++;
                   break;
                }

            }
            if(c==-1)
            cout<<-1<<" "<<-1<<endl;
            else
            cout<<a<<" "<<c<<endl;
        




    }



    return 0;
}