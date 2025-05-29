#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main()
{
    fast_io;

    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin>>n;

        vector<int> array(n+1);
        vector<char> b(n+1);
        vector<long long>prsum(n+1,0);

        for (int i=1;i<=n;i++)cin>>array[i];
        for (int i=1;i<=n;i++)cin>>b[i];

        for (int i=1;i<=n;i++)
        {
            prsum[i] = prsum[i-1]+array[i];
        }

        long long mscore=0;
        int      rightr=n ;

        for (int i=1;i<=n;i++)
        {
            if (b[i]=='L')
            {
                while (rightr>i && b[rightr]!='R')
                {
                    rightr--;
                }
                if (rightr>i) 
                {
                    mscore+=prsum[rightr]-prsum[i-1];
                    rightr--;
                }
            }
        }

        cout<<mscore<<endl;
    }
     return 0;
}