#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    long long int arr=1;

    for(long long int i=1;i<=n;i++)
    {
        arr *= 5;
    }

    printf("%lld\n",arr%100);
    

    return 0;
}