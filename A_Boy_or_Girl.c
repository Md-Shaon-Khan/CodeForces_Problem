#include<stdio.h>
#include<string.h>
int main()
{
    char ss[200],mm;
    scanf("%s",&ss);
    int len = strlen(ss);
    int count=0;

    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(ss[i] > ss[j])
            {
                mm = ss[i];
                ss[i] = ss[j];
                ss[j] = mm;
            }
             
        }
    }
    for(int i=0;i<len;i++)
    {
        if(ss[i] != ss[i+1])
        ++count;
    }

   
    if(count % 2 != 0)
    {
        printf("IGNORE HIM!");
    }
    else if(count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }

    return 0;
    
}