#include<stdio.h>
int main()
{
    int n,a,sum=0,temp;

    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        a = array[n-1] - array[i];
        sum += a;
       
    }
    printf("%d",sum);

   




    return 0;
}