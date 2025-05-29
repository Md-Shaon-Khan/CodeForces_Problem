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
        
        string s;
        cin>>s;
        
        //char optional[n];
        set<char>optional;
        int k=0,count=0;
        char ch = s[0];
        optional.insert(ch);

        for(int i = 0; i < n; i++)
        {
           if(s[i] != ch)
           {
            if(optional.find(s[i])!=optional.end())
             {
                
                count++;
                break;
             }

             ch = s[i];
             optional.insert(ch);
             
           }
        }

        //sort(optional,optional+k);

       /* for(int i=0;i<k;i++)
        {
            cout<<optional[i];
        }
        cout<<endl;
        */
        /*for(int i=0;i<k-1;i++)
        {
            if(optional[i]==optional[i+1])
            {
                cout<<"NO"<<endl;
                ++count;
            }
        }

        if(count==0)
        {
            cout<<"YES"<<endl;
        }*/
       if(count==0)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }




        t--;
    }


    return 0;
}