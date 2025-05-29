#include<stdio.h>
#include<math.h>
int main()
{
    int matrix[10][10],i,j,value;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
       
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(matrix[i][j] == 1)
            {
                i = i+1;
                j = j+1; 
                value = abs(i-3) + abs(j-3);
                break;
            }
        }
    }

    

    printf("%d",value);



    return 0;
}