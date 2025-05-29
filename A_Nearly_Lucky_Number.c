#include<stdio.h>
int main()
{
    long long int n,temp,r,i=0,p=0;

    scanf("%lld",&n);
    temp = n;

    if(temp == 4 || temp == 7)
    {
        printf("NO");
    }
    else
    {
        while(temp != 0)
        {
            r = temp % 10;

            if(r != 0 && r / 4 == 1 || r / 7 == 1)
            {
                ++p;
            }
            else
            {
                ++i;
            }

            temp = temp / 10;
            
        }
        if( i == 0 && p > 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }



    return 0;
}