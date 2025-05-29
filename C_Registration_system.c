#include<stdio.h>
#include<string.h>
int main()
{
    int n,n1,count=0;
    scanf("%d",&n);
    
    char str[100][n];
    
   
    for(int i=0;i<n;i++)
    {
       
        scanf("%s",&str[i]);
        
    }
    for(int i=0;i<n;i++)
    {
        count=0;
        if(i==0)
        printf("OK\n");

        else
        {
            for(int j=0;j<i;j++)
            {
                if(strcmp(str[j],str[i])==1)
                {
                    ++count;
                }
            }
            if(count>0)
            printf("%s%d\n",str[i],i);

            else
            printf("OK\n");
        }
    }
    


    return 0;
}