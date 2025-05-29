#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;


    while(t != 0)
    {
        int n;
        cin >> n;

        char ch[n];
        
        int count = 0;
        int first = 0, second = 0;
        
        for(int i=0;i<n;i++)
        {
            cin>>ch[i];

            if(count==0 && ch[i]=='B')
            {
                first = i;
                count++;
            }
            else if(ch[i]=='B')
            {
                second = i;
            }
        }

        if(count != 0)
        {
            if(second==0)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<second-first+1<<endl;
            }
        }
        else
        {
            cout<<"0"<<endl;
        }







        t--;
    }









    return 0;
}