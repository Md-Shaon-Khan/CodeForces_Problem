#include<stdio.h>
int main()
{
    int r,b,min;
    scanf("%d %d",&r,&b);

    if(r<b)
    {
        min = r;
        printf("%d %d",min,(b-r)/2);

    }
    else
    {
        min = b;
        printf("%d %d",min,(r-b)/2);

    } 






    return 0;
}