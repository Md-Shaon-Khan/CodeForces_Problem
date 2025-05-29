#include<stdio.h>
int main()
{
    int n,i,count=0,s=0;

    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        
    }
    for(i=0;i<n;i++)
    {
        s += array[i];
        if(s==-1)
        {
          ++count;
          s += 1 ;
        }
        
        else if(s!=-1)
        s += array[i];
    }
    printf("%d",count);



    return 0;
}