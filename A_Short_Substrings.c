#include<stdio.h>
#include<string.h>
int main()
{
    int n;

    scanf("%d",&n);

    while(n!=0)
    {
        char ch[101];

        scanf("%s",ch);

        int len = strlen(ch);

        for(int i=0;i<len;i++)
        {
            if(i%2==0 && i !=len-1)
            {
                printf("%c",ch[i]);
            }
            if(i==len-1)
            {
                printf("%c",ch[len-1]);
            }


        }
        
        printf("\n");





        n--;
    }





    return 0;
}