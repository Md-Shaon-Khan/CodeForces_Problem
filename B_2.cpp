#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        
    }
    int d;
        cin>>d;
        int b,c;
        cin>>b>>c;
        d= d-1;
        b =b-1;
        c =c-1;
    v.erase(v.begin()+d);

    v.erase(v.begin()+b,v.begin()+c);

    int size = v.size();

    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<v[i]<<" ";
    }










   

}