#include<stdio.h>
#include<string.h>
int main()
{
    char letter[100];
    int i;

    gets(letter);
    strlwr(letter);

    int len = strlen(letter);

    

    for(i=0;i<len;i++)
    {
        if(letter[i] == 'A' ||letter[i] == 'O' ||letter[i] == 'Y' || letter[i] == 'E' || letter[i] == 'U' || letter[i] == 'I'||
           letter[i] == 'a' ||letter[i] == 'o' ||letter[i] == 'y' || letter[i] == 'e' || letter[i] == 'u' || letter[i] == 'i')
           {
            continue;
           }
           printf(".%c",letter[i]);
    }

    return 0;
}