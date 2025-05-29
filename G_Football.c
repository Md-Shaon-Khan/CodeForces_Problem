#include<stdio.h>
#include<string.h>
int main()
{
    char number[100];
    int i, count = 0, count_1 = 0, z = 0;

    fgets(number, 100, stdin);

    int len = strlen(number);

    for(i = 0; i < len; i++)
    {
        if(number[i] == '1')
        {
            ++count;
            count_1 = 0;
        }
        else
        {
            ++count_1;
            count = 0;
        }

        if(count == 7 || count_1 == 7)
        {
            z = 1;
            break; // Exit the loop if condition met
        }
    }

    if(z == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
