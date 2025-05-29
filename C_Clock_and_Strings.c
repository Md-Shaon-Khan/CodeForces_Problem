#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t != 0)
    {
        int a, b, c, d;
        scanf("%d %d %d %d",&a,&b,&c,&d);

        int x = (a<b)? b : a;
        int y = (a<b) ? a : b;
        int k=0;
        for(int i=y;i<=x;i++)
        {
            if(i==c || i == d)
            {
               k++;

            }

        }

        if(k==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }





        t--;
    }





    return 0;
}