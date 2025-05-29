#include<stdio.h>
#include<math.h>
int main()
{
    int n,nn,temp;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
         scanf("%d",&nn);
         int ab = nn;
         int array[nn];
         for(int j=0;j<nn;j++)
         {
            scanf("%d",&array[j]);
         }
         for(int j=0;j<nn-1;j++)
         {
            for(int p = 0;p<nn-j-1;p++)
            {
                if(array[p]>array[p+1])
                {
                    temp = array[p];
                    array[p] = array[p+1];
                    array[p+1] =temp;
                }
            }
         }
         for(int j=0;j<nn;j++)
         {
            if(array[j] == array[j+1])
            {
                array[j] = array[j+1];
                --ab;

            }
            else if(abs(array[j+1] - array[j])==1)
            {
                array[j] = array[j+1];
                --ab;
            }
         }

         if(ab==1)
         printf("YES\n");
         else
         printf("NO\n");
        
            
         
         
    }




   
}