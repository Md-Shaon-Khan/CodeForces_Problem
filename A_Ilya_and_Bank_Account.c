#include<stdio.h>
int main()
{
    int N;

    scanf("%d",&N);

    if(N>=0)
    {
        printf("%d",N);
    }
    else
    {
        int a,b;

        a = (N/100)*10 + (N%10);
        b = N/10;

        if(a>b)
        {
            printf("%d",a);

        }
        else
        {
            printf("%d",b);
        }

    }




    return 0;
}