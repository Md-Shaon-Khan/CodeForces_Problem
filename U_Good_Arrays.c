#include <stdio.h>
#define MAXN 100000
int main() 
{
    long long int t;
    scanf("%lld", &t);

    while (t != 0) 
    {
        long long int n;
        scanf("%lld", &n);

        long long int sum = 0, count = 0;
        for (long long int i = 0; i < n; i++) 
        {
            long long int x;
            scanf("%lld", &x);

            sum += x;
            
            if (x == 1) 
            {
                count++;
            }
        }

        if (sum >= count + n && n > 1) 
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
