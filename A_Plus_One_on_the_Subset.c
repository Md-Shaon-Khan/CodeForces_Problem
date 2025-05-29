#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    while(n != 0)
    {
        int t;
        scanf("%d",&t);

        int array[t];

        for(int i=0;i<t;i++)
        {
            scanf("%d",&array[i]);
        }

        int min = array[0];

        for(int i=1;i<t;i++)
        {
            if(array[i] < min)
            {
                min = array[i];
            }

        }

        int max = array[0];

        for(int i=1;i<t;i++)
        {
            
            if(array[i] > max)
            {
                max = array[i];
            }

        }

        int a = max - min ;

        printf("%d\n",a);




        n--;
    }








    return 0;
}