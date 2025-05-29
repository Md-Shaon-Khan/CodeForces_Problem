#include<stdio.h>
int main()
{
    int y,x1,x2,x3,x4;

    scanf("%d",&y);

    for(int i=y+1;i<=10000;i++)
    {
        x1 = i / 1000;
        x2 = (i/100) % 10;
        x3 = (i/10) % 10;
        x4 = i%10;

        if(x1 != x2 && x1 != x3 && x1 != x4 && x2 != x3 && x2 != x4 && x3 != x4)
        {
            printf("%d",i);
            break;
        }

    }


    return 0;
}