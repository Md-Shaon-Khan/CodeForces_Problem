#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t!=0)
    {
        int N;

        scanf("%d",&N);

        N = N/2;

        if(N%2==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
            for(int i=1;i<=N;i++)
            {
                printf("%d ",i*2);
            }
            for(int i=1;i<N;i++)
            {
                printf("%d ",2*i - 1);
            }
            printf("%d\n",3*N-1);
        }



        t--;
    }








    return 0;
}