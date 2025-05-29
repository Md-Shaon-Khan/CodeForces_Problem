#include<stdio.h>
#include<stdlib.h>

int compare(const void *x_void , const void *y_void)
{
    int x = *(int *)x_void;
    int y = *(int *)y_void;
    return x-y;
}

int main()
{
    int n,sum=0,i,j,sum2=0,count=0;

    scanf("%d",&n);

    int number[n];

    for(i = 0;i<n;i++)
    {
        scanf("%d",&number[i]);
        sum += number[i];
    }
    sum = sum / 2 ;

    qsort(number,n,sizeof(int),compare);

    for(i=n-1;i>=0;i--)
    {
        sum2 += number[i];
        ++count;
        if(sum2 > sum)
        break;
    }

    printf("%d",count);
}