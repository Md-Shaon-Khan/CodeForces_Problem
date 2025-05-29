#include<stdio.h>
#include<string.h>
int main()
{
    int n,count=0,i;
    char ch[50];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%c",&ch[i]);
    }

     for (i=0;i<=n;i++)

      {

            if (ch[i]==ch[i+1]) count++;

      }

    printf("%d",count);
  
    



    return 0;
}