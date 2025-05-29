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
        char s[n];
     
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int count=0,answer=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                ++count;
            }
            else
            {
                --count;
                if(count<0)
                {
                    ++answer;
                    count=0;
                }
            }
        }


        cout<<answer<<endl;







        t--;
    }





    return 0;
}