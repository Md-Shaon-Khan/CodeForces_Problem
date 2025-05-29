#include<stdio.h>
int main()
{
    int t,A,B;
    scanf("%d",&t);
    char array[15];    
    while(t != 0)
    {
        

        for(int i=0;i<5;i++)
        {
            scanf("%c",&array[i]);
        }
        for(int i=0;i<5;i++)
        {
            if(array[i] == 'B')
            B++;

            else if(array[i]=='A')
            A++;

            
        }
        if(A>B) printf("A\n");
        else printf("B\n");

        A=0;
        B=0;


        t--;
    }
  

    return 0;
}