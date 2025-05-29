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

        string s;
        cin>>s;

        //sort(s.begin(),s.end());
        
        int countA=0,countB=0,countC=0,countD=0;

        for(int i=0;i<4*n;i++)
        {
            if(s[i]=='A' && countA < (s.size() / 4))
            {  
                    countA++;                
            }
            else if(s[i]=='B' && countB < (s.size() / 4))
            {
                countB++;
            }
            else if(s[i]=='C' && countC < (s.size() / 4))
            {
                countC++;
            }
            else if(s[i]=='D' && countD < (s.size() / 4))
            {
                countD++;
            }
        }
        // cout<<"A ="<<countA<<endl;
        // cout<<"B ="<<countB<<endl;
        // cout<<"C ="<<countC<<endl;
        // cout<<"D ="<<countD<<endl;
        int sum = countA + countB + countC + countD;

        cout<<sum<<endl;


    }



    return 0;
}