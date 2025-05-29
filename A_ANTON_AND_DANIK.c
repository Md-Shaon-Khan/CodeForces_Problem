#include<stdio.h>
int main()
{
    int n,A=0,D=0;
    char s[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%c",&s);
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            A++;
        else if(s[i]=='D')
            D++;
    }
    if(D==A)
        printf("Friendship");
    else if(D>A)
        printf("Anton");
    else
        printf("Danik");

        return 0;
}