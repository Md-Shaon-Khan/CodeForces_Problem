/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        long long int n;
        cin>>n;

        if(n==1)
        {
            cout<<"1\n";
        }

        else
        {

            long long int array[n];
            for(long long int i=0;i<n;i++)
        {
            array[i] = i+1;
        }
        for(long long int i=1;i<n;i++)
        {
            long long int k=i+1;
            long long int o;

            for(long long int m=1;m<k;m++)
            {
                if(k%m==0)
                {
                    o = m;
                }
            }
            long long int temp = array[i];
            array[i] = array[o-1];
            array[o-1] = temp;

        }
        cout<<array[1]<<"\n";





        }

        
        t--;
    }

    return 0;
}*/
#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long n; scanf("%ld", &n);
        long x(1);
        while(2 * x <= n){x *= 2;}
        printf("%ld\n", x);
    }

}