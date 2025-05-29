#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch[10],a,b,c;
    for(int i=0;i<n;i++)
    {
       scanf("%s",ch);

       strlwr(ch);

       
       if(ch=="yes")
       printf("YES\n");

       else
       printf("NO\n");
    }

    return 0;
}