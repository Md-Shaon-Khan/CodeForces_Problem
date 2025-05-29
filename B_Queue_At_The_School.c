#include<stdio.h>
#include<string.h>
int main()
{ 
    int n,t,i;
    
   
    
    scanf("%d %d",&n,&t);
    char s[n];

    scanf("%s",&s);
    

    for(i=0;i<t;i++)
    {
        for(int j=0;j<n ;j++)
        {
            if(s[j] == 'B' && s[j+1]=='G')
            {
                s[j] ='G';
                s[j+1]='B';
                ++j;
            }
        }

    }

    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }


    






    return 0;
}