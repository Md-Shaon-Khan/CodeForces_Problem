#include<stdio.h>
int main()
{
    int m,n,t,p,r;
    scanf("%d %d",&m,&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);

    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
               t = array[i];
               array[i] = array[j];
               array[j] = t;
            }
        }
    }
    int sum = array[m-1] - array[0];
    int x = m-1;
   for(int i=1;i<n-x;i++)
   {

    r = array[i+x] - array[i];
   
      if(sum > r)
        sum = r;
        
    
   }
   printf("%d",sum);
    return 0;
}