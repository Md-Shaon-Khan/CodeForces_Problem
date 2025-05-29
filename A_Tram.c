#include<stdio.h>
int main()
{

    int n,a,b,sum=0,max;

    scanf("%d",&n);

    max = 0;

    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        sum = sum -a + b;
        if(max < sum)
         max = sum;
    }

    printf("%d",max);




    return 0;
}