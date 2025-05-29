#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int count=0,a=0,i;

    scanf("%s",&s);

    for( i=0;i<100;i++)
    {
       if(s[i]=='h' && a==0)
       {
        ++count;
        ++a;
       }
       else if(s[i]=='e' && a==1)
       {
        ++count;
        ++a;
       }
       else if(s[i]=='l' && a==2)
       {
        ++count;
        ++a;
       }
       else if(s[i]=='l' && a==3)
       {
        ++count;
        ++a;
       }
       else if(s[i]=='o' && a==4)
       {
        ++count;
        ++a;
       }
       if(a==5)
       break;

    }

    if(count == 5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



    return 0;
}