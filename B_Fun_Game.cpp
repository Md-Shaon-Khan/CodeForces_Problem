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
        
        string a,b;
        cin>>a>>b;
        bool ans = true ;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0' && b[i]=='1')
            {
                ans = false;
            }
            if(a[i]=='1')
            {
                break;
            }

        }

        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }



    return 0;
}