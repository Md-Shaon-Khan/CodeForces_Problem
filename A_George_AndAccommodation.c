#include<stdio.h>
int main()
{
    int n,i,a,b,count=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a<b && b-a != 1)
        {
            ++count;
        }
    }

    printf("%d",count);
}