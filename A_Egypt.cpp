#include<bits/stdc++.h>
using namespace std;
int main()
{

    for(;;)
    {
        int a,b,c;

        cin>>a>>b>>c;

        if(a==b && b==c && c==a)
        {
            break;
        }

        a = a*a;
        b = b*b;

        c = c*c;
        int sum;

        if(a>c && a>b)
        {
            sum = b+c;
            if(sum==a)
        {
          cout<<"right"<<endl;
        } 
        else
        {
          cout<<"wrong"<<endl;
        }
        }
        else if(b>a && b>c)
        {
            sum = a+c;
            if(sum==b)
        {
          cout<<"right"<<endl;
        } 
        else
        {
          cout<<"wrong"<<endl;
        }
        }
        else
        {
            sum = a+b;

            if(sum==c)
           {
            cout<<"right"<<endl;
           } 
            else
        {
          cout<<"wrong"<<endl;
        }
        }

        

       

        

    }
    








    return 0;
}