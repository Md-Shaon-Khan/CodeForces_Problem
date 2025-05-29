#include<stdio.h>
int main()
{
    int n;

    scanf("%d",&n);

    while(n != 0)
    {
        int a;
        scanf("%d",&a);

        int i=0,j=1,ans;

        while (i != a)
        {
            if(j % 3 != 0 && j % 10 != 3)
            {
                ans = j;
                j++;
            }
            else
            {
                j++;
                continue;
            }
            i++;

            
        }
        printf("%d\n",ans);






        n--;
    }









    return 0;
}