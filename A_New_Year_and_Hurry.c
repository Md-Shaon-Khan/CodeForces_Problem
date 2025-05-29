#include<stdio.h>
int main()
{
    int n,k,i=1,j,max,count=0,sum=0;
    scanf("%d %d",&n,&k);

    max = 240 - k;
    
    while(sum <= max)
    {
        sum += 5 * i;
        ++i;
        if(sum <= max)
          ++count;
          
        if(n == count)
        break;



    }
    printf("%d",count);



    return 0;
}