#include<stdio.h>
int main()
{
    int a,b,c,sum[4],sum1;

    scanf("%d %d %d",&a,&b,&c);

    if(a==1 && b==1 && c==1)
      printf("3");
    
    else if(a==b && a!=c)
    {
        printf("%d",(a+b)*c);
    }
    else if(a==c && a!=b && a==1)
    {
        printf("%d",a+c+b);
    }
    else if(a==c && a!=b)
    {
        printf("%d",(b+c)*a);
    }

    else if(c==b && a!=c )
    {
        printf("%d",(c+b)*a);
    }
    
    else
    {

       sum[0] = a + (b*c);
       sum[1] = a * (b+c);
       sum[2] = a * b * c;
       sum[3] = (a+b) * c;

       sum1 = sum[0];

       for(int i=1;i<4;i++)
        {
          if(sum[i]>sum1)
          sum1 = sum[i];
        }

        printf("%d",sum1);

    }

   
    
    return 0;


}