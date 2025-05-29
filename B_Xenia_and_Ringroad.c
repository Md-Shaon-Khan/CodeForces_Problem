#include<stdio.h>
int main()
{
    long long int a,b,sum=0;
    scanf("%lld %lld",&a,&b);

    long long int array[b];
    for(long long int i=0;i<b;i++)
    {
        scanf("%lld",&array[i]);
    }
    sum += array[0] - 1;
           
        

    for(long long int i=0;i<b-1;i++)
    {
       
            
        if(array[i] < array[i+1])
        {
            sum += (array[i+1] - array[i]);
           
        }
        else if(array[i] == array[i+1])
        {
            sum += 0;
        }
        else
        {
            sum += (a - (array[i]-array[i+1]));
            
        }
    }
    printf("%lld",sum);






    return 0;
}