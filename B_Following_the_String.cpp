#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int array[n];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        //int a = 96;
        string s;
        vector<int> arr(26,0);
        for(int i=0;i<n;i++)
        {
            
            
            for(int j=0;j<26;j++)
                {
                    if(array[i]==arr[j])
                    {
                        arr[j]++;
                        s += (char)('a'+j);
                        break;

                    }
                }

        }
        
        cout<<s<<endl;
    



    }





    return 0;
}