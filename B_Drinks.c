#include<stdio.h>
int main()
{
    int n,i;
    float sum=0;

    scanf("%d",&n);
    int x;

    for( i=1;i<=n;i++)
    {
        scanf("%d",&x);
        sum += x;
    }

    

    sum = sum  / n;

    printf("%.12f",sum);




    return 0;
}