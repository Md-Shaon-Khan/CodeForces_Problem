#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i,sum=0;
    int a;
    scanf("%lld",&n);

    

    if(n % 2==0)
    sum = n /2;

    else
    sum = -((n+1)/2);

    printf("%lld",sum);


    return 0;
}