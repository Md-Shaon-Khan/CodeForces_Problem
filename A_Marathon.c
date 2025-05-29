#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n != 0)
    {
        int A[4];

        for(int i=0;i<4;i++)
        {
            scanf("%d",&A[i]);
        }
        int sum = 0 ;

        for(int i=1;i<4;i++)
        {
            if(A[i] > A[0])
            ++sum;
        }
        printf("%d\n",sum);




        n--;
    }
}