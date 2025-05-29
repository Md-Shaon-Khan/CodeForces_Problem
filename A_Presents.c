#include<stdio.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    int friend_number[n];
    int friend_number_2[n];
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&friend_number[i]);
    }

    
    for(j=1;j<=n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(friend_number[i] == j)
            {
                printf("%d ",i+1);
            }
        }
    }





    return 0;
}