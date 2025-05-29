#include<stdio.h>
#include<string.h>
int main()
{
    char wub[200];

    scanf("%s",&wub);
    int len = strlen(wub);

    int i;
    for(i=0;i<len;i++)
    {
        if(wub[i]!='W' || wub[i+1]!='U' || wub[i+2] !='B')
        {
            printf("%c",wub[i]);
        }
        else if(wub[i]=='W' && wub[i+1]=='U' && wub[i+2] =='B')
        {
            
            printf(" ");
            i= i+2;
        }
    }





    return 0;
}