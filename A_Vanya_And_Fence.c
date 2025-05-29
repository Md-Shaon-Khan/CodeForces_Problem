#include<stdio.h>
int main()
{
    int n,h,w=0;
    scanf("%d %d",&n,&h);

    int array[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        if(array[i] > h)
        {
            w += 2; 
        }
        else
        {
            w += 1;
        }
    }

    printf("%d",w);




    return 0;
}