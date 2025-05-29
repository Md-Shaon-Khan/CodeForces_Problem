#include<stdio.h>
int main()
{
    int n,temp,sum1=0,sum2=0,l=0;
    scanf("%d",&n);
    
    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int z=0;
    while(l<n)
    {
        if(z%2==0)
        {
            if(arr[l] > arr[n-1])
            {
                sum1 += arr[l];
                l++;
            }
            else
            {
                sum1 += arr[n-1];
                n--;
            }
        }
        else
        {
            if(arr[l] > arr[n-1])
            {
                sum2 += arr[l];
                l++;
            }
            else
            {
                sum2 += arr[n-1];
                n--;
            }
            
        }

        z++;

    }

    printf("%d %d",sum1,sum2);



    return 0;
}