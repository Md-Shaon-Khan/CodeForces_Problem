#include<stdio.h>
int main()
{
    int n,k,i,count=0,a[100];

    scanf("%d %d",&n,&k);
    if(1<= k && k<=n && n<=50)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i-1]);
            
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i-1] >= a[k-1] && a[i-1] != 0)
            {
                count++;
            }
   
    }
    

    printf("%d",count);


    return 0;
}