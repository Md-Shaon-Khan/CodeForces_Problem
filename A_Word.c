#include<stdio.h>
#include<stdarg.h>
int main()
{

    char ch[99];

    int count_1 = 0,count_2 = 0,i;

    gets(ch);

    int len = strlen(ch);

    for(i=0;i<len;i++)
    {
        if(ch[i] >= 65 && ch[i] <= 90)
        {
            ++count_1;
        }
        else
        {
            ++count_2;
        }
    }

    if(count_1>count_2)
    {
        strupr(ch);
    }
    else
    {
        strlwr(ch);
    }

    printf("%s",ch);




    return 0;
}