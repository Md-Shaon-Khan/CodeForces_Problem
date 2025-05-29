#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;
    cin>>s;



    int len = s.size();
    
    //cout<<len<<endl;

    for(int i=0;i<len;i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
        {
           
           
           cout<<s[i];
          
        }

    }
    //int size = ss.size();

    //cout<<size;

    //for(int i=0;i<size;i++)
    //{
    //    cout<<ss[i];
    //}
    




    return 0;
}