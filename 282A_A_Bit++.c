#include<stdio.h>
int main()
{
    int n,x=0,i;
    char X[10];

    scanf("%d",&n);

    for(i=1;i<=n+1;i++)
    {
        gets(X);
        if(X[0] == 'X' && X[1] == '+')
        {
            x++;
        }
        else if(X[0] == '+' && X[1]=='+')
        {
            ++x;
        }
        else if(X[0] == 'X' && X[1] == '-')
        {
            x--;
        }
        else if(X[0] == '-' && X[1] == '-')
        {
            --x;
        }
    }

    printf("%d",x);



    return 0;
}