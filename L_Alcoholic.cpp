#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x;
     

    cin>>t>>x;

    //int T=t;

    //vector<float>v;
    //vector<float>p;

    int sum = 0,count=0;
    int res = -1;

    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;

        sum += a*b;

        if(sum>x*100)
        {
            cout<<i;
            ++count;
            break;
        }

        

        
    }

    

    /*for(int i=0;i<T;i++)
    {
        float xx,yy;
        xx = v[i];
        yy = p[i];
        sum += xx*yy*.01;
        if(sum>x)
        {
            res = i+1;
            break;
        }

    }*/
    if(count==0)
    cout<<res<<endl;




    return 0;
}