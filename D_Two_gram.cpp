#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    char ch[n];
    
    for(int i=0;i<n;i++)
    cin>>ch[i];
    int count=0;
    char ab[2];
    for(int i=0;i<n-1;i++)
    {
        int count1=0; 
        for(int j=0;j<n-1;j++)
        {
            if(ch[i]==ch[j] && ch[i+1]==ch[j+1])
            {
                ++count1;
            }
        }

        if(count < count1)
        {
            count = count1;
            ab[0] = ch[i];
            ab[1] = ch[i+1];
            ab[2] = '\0';
        }
    }

    cout<<ab;











    return 0;
}