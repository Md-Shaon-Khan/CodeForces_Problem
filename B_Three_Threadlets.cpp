#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
       vector<int>a;

       for(int i=0;i<3;i++)
       {
         long long b;
         cin>>b;
         a.push_back(b);
       }

       sort(a.begin(),a.end());

       if(a[0]==a[2])
       {
        cout<<"YES"<<endl;
       }
       else
       {
        int m=3;
        int count=0;
        while(m--)
        {
            int c,d,size;
            c = a[0];
            size = a.size();
            d = a[size-1] - c;
            a[size-1] = d;
            a.push_back(c);
            
            int sizeN = a.size();
            sort(a.begin(),a.end());

            if(a[0]==a[sizeN-1])
            {
                cout<<"YES"<<endl;
                ++count;
                break;
            }

        }
        if(count==0)
        {
            cout<<"NO"<<endl;
        }
       }










        t--;
    }



    return 0;
}