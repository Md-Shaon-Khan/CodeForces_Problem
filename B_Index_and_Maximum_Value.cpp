#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,b;
        cin>>a>>b;

        vector<int> arr;
        for(int i=0;i<a;i++)
        {
            int d;
            cin>>d;
            arr.push_back(d);
        }
        int p = *max_element(arr.begin(), arr.end());
        while(b--)
        {
            char c;
            int l,r;
            cin>>c>>l>>r;

            


            // for(int i=0;i<a;i++)
            // {
            //     if(arr[i]>=l && arr[i]<=r)
            //     {
            //         if(c=='+')
            //         {
            //             arr[i]++;
            //         }
            //         else
            //         {
            //             arr[i]--;
            //         }

            //     }
            // }

            if(l<=p && p<=r)
            {
                if(c=='+')
                {
                    p++;
                }
                else
                {
                    p--;
                }
            }
            cout <<p<<" ";



        }



    cout<<endl;

    }





    return 0;
}
