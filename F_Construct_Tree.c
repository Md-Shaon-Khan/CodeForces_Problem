#include<stdio.h>
#define max 15
int main()
{
    int N,d,array_1[max],n,i,j,sum = 0;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%d %d",&n,&d);

        for(j=1;j<=n;j++)
        {
            scanf("%d",&array_1[j-1]);
            sum += array_1[j-1];

        }
        if(sum<=d)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }


    return 0;
}