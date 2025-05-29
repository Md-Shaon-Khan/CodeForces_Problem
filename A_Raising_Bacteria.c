#include<stdio.h>

int main()
{
    long int n, ans;
    
    scanf("%ld",&n);
        ans=0;
        while (n > 1)
        {
            if (n % 2 == 0)
                n = n / 2;
            else
            {
                n = n - 1;
                ans++;
            }
        }
        printf("%ld\n", ans + 1);
    
    return 0;
}
