#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    
    size_t a = s1.find(s2);

    if(a != string::npos)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }





    return 0;
}