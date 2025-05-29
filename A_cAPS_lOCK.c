#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,count=0;

    scanf("%s",&s);

    int len = strlen(s);

    for(i=0;i<len;i++)
    {
        if(s[i]>=65 && s[i] <= 90)
        ++count;
    }
    
    if(count==1 || count==len || (count == len-1 && s[0]>=97))
    {
     
     if(count == len)
     {
        printf("%s",strlwr(s));
     }
     else if(count < len && s[0] <= 90 )
     {
        strlwr(s);
        s[0] = s[0] - 32 ;
         printf("%s",s);
     }
     else if(count < len && s[0] > 90 )
     {
        strlwr(s);
        s[0] = s[0] - 32 ;
         printf("%s",s);
     }
     else
     {
        s[0] = s[0] - 32;
         printf("%s",s);
     }

    

    }
    else if(count == 0)
    {
        printf("%s",strlwr(s));
    }
    
    else
    {
        printf("%s",s);
    }
    
    




    return 0;
}