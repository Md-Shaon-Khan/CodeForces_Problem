/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;

    for(int i=1;i*b<=a;i++)
    {
        a++;
    }
    cout<<a;

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    int count=0;

    for(int i=1;i<=a;i++)
    {
        if(i%b==0)
        {
            a++;
        }
        ++count;
    }
   
    cout<<count;

    return 0;
}