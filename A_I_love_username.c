#include<stdio.h>
int main()
{
    int n,max,max1,min,count=0,i,cc=0;

    scanf("%d",&n);
    int number[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    max = number[0];
    min = number[0];
    for(i=0;i<n;i++)
    {
        
        if(max < number[i])
        {
            ++count;
            max = number[i];
        }
        if(min > number[i])
        {
            ++count;
            min = number[i];
        }

    }

    printf("%d",count);
    return 0;
}