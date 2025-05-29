#include<stdio.h>
#include<string.h>
int main()
{
    char p[100];
    int i,j,count=0;

    scanf("%s",&p);

    int len = strlen(p);

    for(i=0;i<len;i++)
    {
        if(p[i]=='H' || p[i] == 'Q' || p[i] =='9')
        {
          ++count;
        }
         
        
        
         
    }
   
    if(count>0)
    printf("YES");

    else
    printf("NO");




    return 0;
}