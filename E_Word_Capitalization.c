#include<stdio.h>
int main()
{
    char letter[1001];
    gets(letter);

    if(letter[0]>='A' && letter[0]<='Z')
    {
        printf("%s",letter);
    }
    else
    {
        letter[0] = letter[0] - 32;

        printf("%s",letter);
    }







    return 0;
}