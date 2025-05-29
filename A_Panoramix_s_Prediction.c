#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,count=0;

    scanf("%d %d",&a,&b);
    int c = a+1;
    
    for(int i=c;i<=50;i++)
    {
        int count=0;
        for(int j=2;j<i;j++)
        {
            if(i%j!=0)
            {
                ++count;
            }
            else
            {
                count=0;
                break;
            }
            


        }
        if(count==0 && i<50)
        {
            continue;
        }

        if(count != 0 )
        {
            if(i==b )
            {
                printf("YES\n");
                count++;
                break;
            }
            else
            {
                printf("NO\n");
                count++;
                break;
            }
        }
        else
        {
            printf("NO");
        }
        

    }
    
    
        
    




    return 0 ;
}