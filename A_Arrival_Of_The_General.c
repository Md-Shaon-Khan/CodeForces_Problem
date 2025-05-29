#include<stdio.h>
int main()
{
    int n,i,max_pos,min_pos,count=0;
    scanf("%d",&n);

    int number[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    int max = number[0];
    max_pos = 1;
    int min = number[0];
    min_pos = 1;

    for(i=1;i<n;i++)
    {
        if(number[i] > max)
        {
            max = number[i];
            max_pos = i + 1;

        }
        
        if(number[i]<=min)
        {
            min = number[i];
            min_pos = i+1;
        }
        
       
    }
    
    
    if(max_pos < min_pos)
    {
       count = (max_pos-1) + (n-min_pos);

       printf("%d",count);
    }
    else if(max_pos > min_pos)
    {
        count = (max_pos-1) + (n - min_pos) -1;
        printf("%d",count);
    }







    return 0;
}