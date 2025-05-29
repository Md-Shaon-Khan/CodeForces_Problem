#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp,count=0;

    scanf("%d",&n);

    int digits = floor(log10(abs(n))) + 1;
    if(n%47==0)
    {
        printf("YES");
    }

    else if(n % 4==0 || n%7==0)
    {
        printf("YES");
    
    }
    else
    {
        temp = n;

        while(temp!=0)
        {
            r = temp % 10;
            if(r / 4 == 1  && r % 4==0)
            {
                ++count;
            }
            else if(r/7==1 && r%7==0)
            {
                ++count;
            }
            temp = temp / 10;
        }

        if(count == digits)
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