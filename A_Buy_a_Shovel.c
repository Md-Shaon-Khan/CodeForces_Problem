#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);

    for(int i=1;;i++)
    {
        sum += a;
        if(sum % 10 == 0 || sum % 10 == b)
        {
            printf("%d",i);
            break;
        }
        else
        continue;
    }




    return 0;
}