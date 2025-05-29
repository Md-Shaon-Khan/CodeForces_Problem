#include<stdio.h>
#include<math.h>
int main()
{
    int n,count1=0,count2=0,count3=0,count4=0,min_t;
    scanf("%d",&n);

    int number[n];
     
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number[i]);

        if(number[i] == 1)
          ++count1;
        else if(number[i] == 2)
          ++count2;
        else if(number[i] == 3)
          ++count3;
        else if(number[i] == 4)
          ++count4;

    
    }
    min_t = count4;

    while(count1 != 0 && count3 != 0)
    {
        count3 = count3 - 1 ;
        count1 = count1 - 1 ;
        min_t  = min_t  + 1 ;
    }
    if(count1 == 0 && count3 != 0)
    {
        min_t = min_t + count3;
        count3 = 0;
    }
    min_t = min_t + count2 / 2;
    if(count2 % 2 != 0)
    {
        if(count1<=2)
        {
            min_t += 1;
            count2 = 0;
            count1 = 0;
        }
        else
        {
            count1 = count1 - 2;
            min_t += 1;
            count2 = 0;
        }
       
    }
    if(count1!= 0)
    {
        min_t += count1/4;
        if(count1 % 4 != 0)
        {
            min_t += 1;
        }
    }

    printf("%d",min_t);

    



    return 0;
}