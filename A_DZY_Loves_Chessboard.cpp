#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;

    char array[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>array[i][j];

            if(array[i][j]=='.')
            {
                if((i%2==0 && j%2==0) || (i%2==1 && j%2==1))
                {
                    array[i][j] = 'B';
                }
                else
                {
                    array[i][j] = 'W';
                }
            }
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<array[i][j];

            
        }
        cout<<endl;
    }




    return 0;
}