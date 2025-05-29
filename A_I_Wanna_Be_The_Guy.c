#include<stdio.h>
int main()
{
    int n,p,q,i,array[300],array_2[300],count=0,k=0;

    scanf("%d",&n);

    scanf("%d",&p);

    for(i=0;i<p;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&q);
    for(i=p;i<(p+q);i++)
    {
        scanf("%d",&array[i]);
    }
    for(int j=1;j<=100;j++)
    {
        for(i=0;i<(p+q);i++)
        {
            if(array[i] == j)
            {
                array_2[k] = array[i];
                ++k;

            }
        }
    }

    for(i=0;i<(p+q);i++)
    {
        if(array_2[i] != array_2[i+1])
        {
            ++count;
        }
    }
    
    if(count != n)
    {
        printf("Oh, my keyboard!");
    }
    else
    {
        printf("I become the guy.");
    }

    return 0;
}