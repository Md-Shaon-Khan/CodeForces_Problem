#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);

    long int m=0 , c=0 , a[n] , b[n];

   for(long int i=0;i<n;i++)
   {
        scanf("%ld %ld",&a[i],&b[i]);
   }
   for(long int i=0;i<n;i++)
   {
        if(a[i]>b[i])
        {
            ++m;
        }
        else if(a[i]<b[i])
        {
            ++c;
        }
        
   }

    if(m>c)
    {
        printf("Mishka");
    }
    else if(m<c)
    {
        printf("Chris");
    }
    else if (m==c)
    {
        printf("Friendship is magic!^^");
    }




    return 0;
}