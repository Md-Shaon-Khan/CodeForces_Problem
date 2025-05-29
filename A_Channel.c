#include<stdio.h>
#include<string.h>
int main()
{

    int t;

    scanf("%d",&t);

    while(t != 0)
    {
        int n,a,q,countP=0,countM=0;

        scanf("%d %d %d",&n,&a,&q);

        char ch[q];
        
        for(int i=0;i<q;i++)
        {
            scanf("%c",&ch[i]);

            if(ch[i]=='+')
            {
               ++countP;
            }
            else
            {
                ++countM;
            }
        }

        if(n==a)
        {
            printf("YES\n");
        }
        else
        {
            
        }












        t--;
    }







    return 0;

}