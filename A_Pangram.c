#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,count=0;
    char l;
    scanf("%d",&n);

    char s[n];
    scanf("%s",&s);

    strlwr(s);
     for(a=0;a<n-1;a++)
    {

        for(b=a+1;b<n;b++)
        {
            if(s[b]<s[a])
            {
                l = s[b];
                s[b] = s[a];
                s[a] = l;
            }

        }
    }
    
    for(a=0;a<n;a++)
    {
        if(s[a]!=s[a+1])
        ++count;
    }
   
    if(count==26) printf("YES");
    else printf("NO");




    return 0;
}