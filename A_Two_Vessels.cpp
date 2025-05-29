#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        float a,b,c,max,min;
        cin>>a>>b>>c;

        if(a>b)
        {
             max = a;
             min = b;

        }
        else
        {
             max = b;
             min = a;
        }
        int count=0;
        while(max != min)
        {
            if((max-min)>=2*c)
            {
                max = max - c;
                min = min + c;
                ++count;

            }
            else
            {
                max = min;
                ++count;
            }
        }


        cout<<count<<endl;
       







        t--;
    }




    return 0;
}