#include<stdio.h>
int main()
{
    long long int x1 , x2,x3,x4,max;
    scanf("%lld %lld %lld %lld",&x1,&x2,&x3,&x4);

    if(x1 > x2 && x1>x3 && x1>x4)
    {
       max = x1;
        printf("%lld %lld %lld",max-x2,max-x3,max-x4);
    }
    else if(x2 > x1 && x2 > x3 && x2>x4)
    {
       max = x2;
       printf("%lld %lld %lld",max-x1,max-x3,max-x4);
    }
    else if(x3 > x1 && x3>x2 &&x3>x4)
    {
       max = x3;
       printf("%lld %lld %lld",max-x1,max-x2,max-x4);
    }
    else
    {
       max = x4;
       printf("%lld %lld %lld",max-x1,max-x2,max-x3);
    }



    return 0;
}