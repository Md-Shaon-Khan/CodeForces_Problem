#include<stdio.h>
int main()
{
    int n,a,b,sum,s1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b) 
        {
            sum = a-b;
        }
        else
        {
            sum = b - a;
        }
        s1  = sum % 10;
        sum = sum / 10;
        if(s1 == 0)
        {
            printf("%d\n",sum);
        }
        else
        {
            printf("%d\n",sum+1);
        }
        
    }





    return 0;
}