#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);

    int number[n];

    int i,j;

    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }

    int max;

    max = number[0];
    for(i=0;i<n;i++)
    {
        if(max<number[i])
        {
            max = number[i];
        }
    }



    for(j=1;j<=max;j++)
    {
        for(i=0;i<n;i++)
        {
            if(number[i] == j)
            {
                printf("%d  ",number[i]);
            }
        }
    }




    return 0;
}