#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d %d %d %d",&n,&a,&b,&c);

    if(a+b+c == n)
    {
        printf("3");
    }
    else if(a+b == n || b+c == n || a+c == n)
    {
        printf("2");
    }
    else if(a==n || b==n || c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }






    return 0;
}