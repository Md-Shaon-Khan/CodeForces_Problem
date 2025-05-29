#include<stdio.h>
int main()
{
    int array[100][100],i,j,n,sum_1 = 0,sum_2 = 0,sum_3 = 0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array[i][j]);
        }

        sum_1 += array[i][0];
        sum_2 += array[i][1];
        sum_3 += array[i][2];
    }

    if(sum_1 == 0 && sum_2 == 0 && sum_3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    
    




    return 0;
}