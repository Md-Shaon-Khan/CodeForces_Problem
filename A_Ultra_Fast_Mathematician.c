#include<stdio.h>
#include<string.h>
int main()
{
    char number_1[110],number_2[110],result[110];

    scanf("%s %s",&number_1,number_2);

    int len = strlen(number_1);

    for(int i=0;i<len;i++)
    {
        if(number_1[i] == number_2[i])
        {
            result[i] = '0';
        }
        else
        {
            result[i] = '1';
        }
    }

    result[len] = '\0';

    printf("%s",result);





    return 0;
}