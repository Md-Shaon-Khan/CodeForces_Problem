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
        int count=0;
        for(int i=0;i<n-2;i++)
        {
            if((s[i]== 'm' && s[i+1]=='a' && s[i+2]=='p' ) || (s[i]== 'p' && s[i+1]=='i' && s[i+2]=='e'))
            {
                ++count;
                i=i+2;
            }
        }


        cout<<count<<endl;
        







        t--;
    }









    return 0;
}