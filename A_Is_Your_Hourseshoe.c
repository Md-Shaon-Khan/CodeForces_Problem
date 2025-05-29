#include<stdio.h>
int main()
{
    long long int a,b,c,d;

    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);

    if(a==b && b==c && c==d)
     printf("3");
    
    else if((a==b && b== c && c!=d) ||(a!=b && b== c && c==d) ||(a==b && b!= c && c==d) || (a!=b && a!=c && a==d && b==c && b!=d) ||(a!=b && a==c && a!=d && b!=c && b==d) )
     printf("2");

    else if((a!=b && a!=c && a==d && b!=c && b!=d)||(a!=b && a==c && a!=d && b!=c && b!=d)||(a==b && b!= c && c!=d) ||(a!=b && b== c && c!=d) ||(a!=b && b!= c && c==d) || (a!=b && b!= c && c!=d && b==d) )
     printf("1");
    
    else
     printf("0");




    return 0;
}