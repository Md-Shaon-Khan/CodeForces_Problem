#include<stdio.h>
int main()
{
    int k,n,w,i,coast = 0,total;

    scanf("%d %d %d",&k,&n,&w);

    for(i = 1;i <= w ;i++)
    {
        coast = coast + i * k;
    }

    if(coast>n)
    {
        total = coast - n ;
    }
    else
        total = 0;
    printf("%d",total);
   
    return 0;
}