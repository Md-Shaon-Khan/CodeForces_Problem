#include <stdio.h>

void solve()
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a == b)
        printf("%lld\n", c);
    else if (a == c)
        printf("%lld\n", b);
    else 
        printf("%lld\n", a);
}

int main()
{
    long long int T = 1;
    scanf("%lld", &T);
    while (T--) 
    {
        solve();
    }

    return 0;
}
