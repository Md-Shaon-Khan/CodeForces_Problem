#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        char array[3][3];
        int k;

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>array[i][j];
                if(array[i][j]=='?')
                {
                    k = i;
                }

            }
        }

        //cout<<k<<endl;
        int sum,sum1=0;
        for(int j=0;j<3;j++)
        {
            sum1 += array[k][j];
            
        }

        sum1 = sum1 - 63;
        sum = 198 - sum1;

        char res = sum;

        //cout<<sum<<endl;

        cout<<res<<endl;
        //printf("%c\n",sum);



        t--;
    }




    return 0;
}