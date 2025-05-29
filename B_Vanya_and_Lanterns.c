#include<stdio.h>
int main()
{
    int n,l,i,j,temp,x;
    scanf("%d %d",&n,&l);

    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
               temp = array[j];
               array[j] = array[i];
               array[i] = temp;
            }
        }
    }
    

    int max = array[1] - array[0];
    for(i = 1;i<n-1;i++)
    {
        x = array[i+1] - array[i];
        if(x > max)
        {
            max = x;
        }
    }
    double mm = (double)max / 2;
    if(mm>array[0])
   {printf("%.10lf",mm);} 
    else
    {
      mm = array[0];
      printf("%.10lf",mm);
    }   



    return 0;
}