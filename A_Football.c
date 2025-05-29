#include<stdio.h>
#include<strings.h>
int main()
{
    char number[100];
    int i,count = 0,count_1=0,z;

    gets(number);

    int len = strlen(number);

   
        for(i=0;i<len;i++)
        {
            
            if(number[i]=='1')
            {
                ++count;
                count_1 = 0;
            }
            else
            {
                ++count_1 ;
                count = 0;
            }

            if(count==7 || count_1 == 7)
            {
                z = 1;

            }



        }

    

    if(z!=1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

   


    return 0;
}