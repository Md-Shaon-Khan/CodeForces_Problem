#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);

    int count_1,count_5,count_10,count_20,count_100,total;

    int tk_100_l,tk_20_l,tk_10_l,tk_5_l,tk_1_l;
    
    count_100 = n / 100;
    tk_100_l  = n % 100;

    count_20  = tk_100_l / 20;
    tk_20_l   = tk_100_l % 20;

    count_10  = tk_20_l / 10;
    tk_10_l   = tk_20_l % 10;

    count_5  = tk_10_l / 5;
    tk_5_l   = tk_100_l % 5;
    
    count_1  = tk_5_l / 1;

    total    = count_100 + count_20 + count_10 + count_5 + count_1;

    printf("%d",total);

    return 0;



}