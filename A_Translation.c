#include<stdio.h>
#include<string.h>
int main()
{
    char s[150],t[150],s1[150];
    int i,j,len;

    gets(s);
    gets(t);

    

    len = strlen(s);

    for(i=len-1,j=0;i>=0,j<len;i--,j++)
    {
        s1[j] = s[i];
    }
    s1[len] ='\0';
    

    if(strcmp(s1,t)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    /*
    #include<stdio.h>
    #include<string.h>
    int main()
    {

       char s[101],t[101];
       int r;
       while(scanf("%s%s",s,t)!=EOF)
       {

          r=strcmp(s,strrev(t));
          if(r==0)
            printf("YES\n");
          else
            printf("NO\n");

        }
    }
    
    */




    return 0;
}