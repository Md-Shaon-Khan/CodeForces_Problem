#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int value = abs(a-b);
    if((a==0 || b==0) && (a==9 || b==9))
    {
        cout<<value-1;
    }
    else if((a==0 && b==0 ) || (a==0 || b==0 ) && (a>0 || b>0))
    {
        cout<<value+1;
    }
    else 
    {
        cout<<value;
    }




    return 0;
}