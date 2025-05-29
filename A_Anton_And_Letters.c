#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,count=0;
    char s[1000],l;
    
    gets(s);

    int len = strlen(s);
    for(a=0;a<len-1;a++)
    {

        for(b=a+1;b<len;b++)
        {
            if(s[b]<s[a])
            {
                l = s[b];
                s[b] = s[a];
                s[a] = l;
            }

        }
    }
    for(a=0;a<len-1;a++)
    {
        if(s[a]!=s[a+1] && s[a]>96 && s[a]<123)
        ++count;
    }

    printf("%d",count);





    return 0;
}