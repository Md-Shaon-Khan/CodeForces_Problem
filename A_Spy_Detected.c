#include<stdio.h>
int main()
{
    int t;

    scanf("%d",&t);

    while(t != 0)
    {
        int n;
        scanf("%d",&n);

        int array[n];
        
        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(i == 0 && array[i] !=array[i+1] && array[i] !=array[i+2])
            {
                printf("%d\n",i+1);break;
            }
            else if(i == n-1 && array[i] !=array[i-1] && array[i] !=array[i-2])
            {
                printf("%d\n",i+1);break;
            }
            else if(i!=0 && array[i] !=array[i-1] && array[i] !=array[i+1])
            {
                printf("%d\n",i+1);break;
            }
        }

        t--;
    }





    return 0;
}