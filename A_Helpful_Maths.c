#include<stdio.h>
#include<string.h>
int main()
{
    char ss[100];
    int temp;
    scanf("%s",&ss);
    int lenth = strlen(ss);
    if(lenth>1)
    {
        for(int i=0;i<lenth-2;i=i+2)
        {
            for(int j=i+2;j<lenth;j=j+2)
            {
                if(ss[i] >= ss[j])
                {
                    temp = ss[i];
                    ss[i] = ss[j];
                    ss[j] = temp;
                }
            }
        }
    }
   if(lenth==1)
    {
        printf("%s",ss);
    }
    else
    {
       
            printf("%s",ss);
        
    }



    return 0;
}