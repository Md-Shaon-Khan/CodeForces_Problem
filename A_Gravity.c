#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int number[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }

    for(int j=1;j<=100;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(number[i] == j)
            {
                printf("%d ",number[i]);
            }
        }
    }




    return 0;
}