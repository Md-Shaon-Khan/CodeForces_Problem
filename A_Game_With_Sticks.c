#include<stdio.h>
int main()
{
    int n,m,count=0,i=1;
    scanf("%d %d",&n,&m);

    while(1)
    {
        if(n-i==0) break;
        if(m-i==0) break;
        ++i;
        ++count;
    }

    if(count%2==0) printf("Akshat");
    else printf("Malvika");



    return 0;
}