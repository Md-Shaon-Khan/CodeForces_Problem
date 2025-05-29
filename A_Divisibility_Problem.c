#include<stdio.h>

int main()
{
    int n,i,j,m=0;;
    scanf("%d",&n);

    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i] % b[i] == 0)
        {
            printf("0\n");
        }
        else
        {   m = 0;
            while(a[i] % b[i] != 0)
            {
                ++m;
                a[i] = a[i] + 1;
            }
            printf("%d\n",m);
        }
    }
    return 0;
}