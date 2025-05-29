#include<stdio.h>
int main()
{
    int n,k,i,count=0,j;

    scanf("%d",&n);
    scanf("%d",&k);

    int number[10000];
    
    j=0;
    for(i=1;i<=n;i++)
    {
        if(i%2 == 1)
        {
            number[j++] = i;
            ++count;
        }

        
    }
    for(i=1;i<=n;i++)
    {
        if(i%2 == 0)
        {
            number[count++] = i;
            
        }       
    }

    printf("%d",number[k-1]);
   



    return 0;
}