#include<stdio.h>
#include<math.h>
int main()
{
    int a[1000000]={0};
    for(int i=2;i*i<=1000000;i++)
    {
         if(a[i]==0)
         {
            for(int j=2;i*j<=1000000;j++)
            {
                a[j] == 1;
            }
         }
    }
    
    
    int n,count=0;
    scanf("%d",&n);

    long long int pp,sq;

    for(int i=0;i<n;i++)
    {
        scanf("%lld",&pp);
        sq = sqrt(pp);
    
        if(pp==1)printf("NO\n");
        else if(sq*sq==pp && a[sq]==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        
    }



    return 0;
}