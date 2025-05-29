#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);

   
    if(n==1)
    {
        printf("I hate it");
    }
    else if(n>1)
    {
        printf("I hate that ");
    
    
    
    for(i=2;i<n;i++)
    {
        if(i %2 ==1)
        {
           printf("I hate that ");
        }
        else
        {
            printf("I love that ");
        }
        

    }

        if( n%2==0)
        {
        printf("I love it");
        }
        else
        {
        printf("I hate it");
        }

    }



    return 0;
}