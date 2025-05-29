#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t != 0)
    {
        int n;
        scanf("%d",&n);
        char ch[n];

        scanf("%s",ch);
        int count =0;
        for(int i=0;i<n-2;i++)
        {
            if((ch[i]=='m' && ch[i+1]=='a'&&ch[i+2]=='p') || (ch[i]=='p' && ch[i+1]=='i'&&ch[i+2]=='e'))
            {
               ++count;
               i = i+2;
            }
        }

        printf("%d\n",count);




        t--;
    }
    
}