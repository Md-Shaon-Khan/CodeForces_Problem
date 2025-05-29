#include<stdio.h>
int main()
{
    int n,array[3];
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int i=0;i<3;i++)
        {
            scanf("%d",&array[i]);
        }
        if(array[0]==array[1]+array[2] || array[1]== array[0]+array[2] || array[2] == array[0]+array[1])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }




    return 0;
}