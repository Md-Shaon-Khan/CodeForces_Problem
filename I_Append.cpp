#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    vector<int>s;
    vector<int>p;
    while(t != 0)
    {
        int a,b;

        cin>>a>>b;

        if(a==1)
        {
            s.push_back(b);
        }
        else
        {
            int len = s.size();

            for(int i=0;i<len;i++)
            {
                if(i == (len-b))
                {
                    cout<<s[i]<<endl;
                    break;
                }
            
            }
        
        }





        t--;
    }

    
        






    return 0;
}