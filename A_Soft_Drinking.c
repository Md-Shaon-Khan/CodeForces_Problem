#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;

    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int water,lim_s,grams,min;

    water = k*l;
    water = water / nl;
    water = water/n;
    lim_s = c*d;
    lim_s = lim_s/n;
    grams = p/np;
    grams = grams/n;
    
    if(water<lim_s && water<grams) printf("%d",water);

    else if(lim_s < water && lim_s < grams) printf("%d",lim_s);

    else printf("%d",grams);


    return 0;
}