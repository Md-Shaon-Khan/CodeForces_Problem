#include<stdio.h>
int main()
{
    int n,count=0;
    

    scanf("%d",&n);
    int num[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]==1)
          ++count;

    }

    if(count>0)
    printf("HARD");

    else
    printf("EASY");




    return 0;
}