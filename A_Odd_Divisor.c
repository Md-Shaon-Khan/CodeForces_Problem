#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    scanf("%lld",&n);

    while(n!=0)
    {
        long long int t,count;
        count=0;
        scanf("%lld",&t);

        if(t % 2==1)
        {
            printf("YES\n");
        }       
        else
        {
            for (int i = 3; i <= sqrt(t); i = i + 2)
            {
             if (t % i == 0)
            {
           printf("YES\n");
          ++count;
           break;
         }
            }

            if(count==0)
            {
                printf("NO\n");
            }

        }



        n--;
    } 

    /*
        #include<stdio.h>

int main()
{
   int t;
   scanf("%d", &t);
   while(t--)
  {
   long long int n;
   scanf("%lld", &n);
   if(n && !(n&(n-1))) printf("NO\n");
   else printf("YES\n");
}
}

    
    */ 

        
        
}