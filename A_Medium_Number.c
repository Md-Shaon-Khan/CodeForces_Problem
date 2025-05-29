#include<stdio.h>
int main()
{
    int t,temp;
    scanf("%d",&t);

    while(t!=0)
    {
        int a[3];

        for(int i=0;i<3;i++)
        {
            scanf("%d",&a[i]);
        }
        for(int i=0;i<3;i++)
        {
            for(int j=i+1;j<3;j++)
            {
                if(a[i]>a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;

                }

            }
        }

        printf("%d\n",a[1]);





        t--;
    }







    return 0;
}