#include<stdio.h>
#include<math.h>
int main()
{
    int a[3];

    scanf("%d %d %d",&a[0],&a[1],&a[2]);

    int min = a[0];
    int max = a[0];

    for(int i=1;i<3;i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
        if(max < a[i])
        {
            max = a[i];
        }

    }

    int sum = max - min;

    printf("%d",sum);



    return 0;
}