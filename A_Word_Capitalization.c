#include<stdio.h>
#include<string.h>
#define max 1000
int main()
{
    char letter[max];
    int lenth,i;

    gets(letter);
    lenth = strlen(letter);

   
        if(letter[0]>= 'a' && letter[0] <= 'z')
        {
            letter[0] = letter[0] -32;
        }
    

    printf("%s",letter);

    return 0;
}