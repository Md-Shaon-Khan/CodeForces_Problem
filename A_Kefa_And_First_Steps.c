#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);

    int number[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    int max = 0;

    for(i=1;i<n;i++)
    {
        if(number[i]>=number[i-1])
        {
            max++;
            if(max>count)
              count = max ;

        }
        else
        max = 0 ;


    }
    printf("%d",count+1);




    return 0;
}