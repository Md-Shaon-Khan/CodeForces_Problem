#include<stdio.h>
int main()
{
    int number,a,b;

    scanf("%d",&number);

    if(number % 2 == 0)
    {
        a = number/2;
        if(a % 2 != 0)
          printf("%d %d",a+1,a-1);
        
        else
          printf("%d %d",(number/2 -2),(number/2 +2));
    }
    else
    {
        printf("9 %d",number-9);
    }






    return 0;
}