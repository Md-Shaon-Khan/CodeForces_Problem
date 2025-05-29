#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char ch[n];

    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    int x=0,y=0;
    
    int count=0;

    for(int i=0;i<n;i++)
    {
        
        if(ch[i]=='U')
        {
            x++;
        }
        else
        {
            
            y++;
        }

        if(x==y && ch[i]==ch[i+1])
        {
            ++count;
        }
    }

    cout<<count;







    return 0;
}