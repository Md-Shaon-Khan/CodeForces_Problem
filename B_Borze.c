#include<stdio.h>
#include<string.h>
int main()
{
    char Spe[200];

    gets(Spe);

    int len = strlen(Spe);

    for(int i=0;i<len;i++)
    {
        if(Spe[i] == '.')
        {
            printf("0");
        }
        else if(Spe[i]=='-' && Spe[i+1] =='.')
        {
            printf("1");
            ++i;
        }
        else if(Spe[i] =='-' && Spe[i+1]=='-')
        {
            printf("2");
            ++i;
        }
    }
}