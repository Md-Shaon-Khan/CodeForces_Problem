#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;

    while(t != 0)
    {
        ll n,m;
        cin>>n>>m;

        ll array[n][m];

        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cin>>array[i][j];
            }
        }
        
        bool okay = true;

        while(okay)
        {
            ll up, down, right, left;
            okay = false;

            for(ll i=0;i<n;i++)
            {
                for(ll j=0;j<m;j++)
                {
                    if(i > 0)
                    {
                        up = array[i-1][j];
                    }
                    else
                    {
                        up = 0;
                    }
                    if(j > 0)
                    {
                        left = array[i][j-1];
                    }
                    else
                    {
                        left = 0;
                    }
                    if(i < n-1)
                    {
                        down = array[i+1][j];
                    }
                    else
                    {
                        down = 0;
                    }
                    if(j < m-1)
                    {
                        right = array[i][j+1];
                    }
                    else
                    {
                        right = 0;
                    }


                    ll max_N = max(max(up,down),max(left,right));
                    if(array[i][j] > max_N)
                    {
                        array[i][j] = max_N;
                        okay = true;

                    }
                }
            }

        }
        

        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<m;j++)
            {
                cout<<array[i][j]<<" ";
            }
            cout<<endl;
        }









        t--;
    }









    return 0;
}