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

        sort(s.begin(),s.end());
        int sum = 2;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
               sum += 2;
            }
            else
            {
                sum += 1;
            }
        }

        cout<<sum<<endl;





        t--;
        
    }






    return 0;
}