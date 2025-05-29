#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t != 0)
    {
        int a,b,n;
        scanf("%d %d %d",&a,&b,&n);

        int arr[n];
        int c = n-1;
        arr[0] = a;
        arr[c] = b;

        
            int j=1;
            
            for(int i=n-2;i>=1;i--)
            {
                arr[i] = arr[i+1]-j;
               
                ++j;
               
            }
            
           int k=1;

           for(int i=0;i<n-1;i++)
           {
            if(arr[i+1] <= a[i])
            k=0;
           }
           for(int i=0;i<n-2;i++)
           {
               int p= arr[i+1] - arr[i];
               int q = arr[i+2] - arr[i+1];

               if(p<=q)
               {
                  k= 0;
               }

           }

            
            if(k==1)
            {
                 for(int i=0;i<n;i++)
                {
                printf("%d ",arr[i]);
                }

            }
            else
            {
                printf("-1\n");

            }
               

          

           
           

        




        t--;
    }





    return 0;
}