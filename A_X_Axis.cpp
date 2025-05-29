#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int array[3];

        array[0] = abs(b-a) + abs(c-a);
        array[1] = abs(a-b) + abs(c-b);
        array[2] = abs(a-c) + abs(b-c);

        sort(array,array+3);

        cout<<array[0]<<endl;

        t--;
    }






    return 0;
}