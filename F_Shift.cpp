#include<bits/stdc++.h>
using namespace std;
int main()
{
   
        int n,k;
        cin>>n>>k;

        vector<int>array;

        int p;

        for(int i=0;i<n;i++)
        {
            cin>>p;
            array.push_back(p);
        }

        for(int i=0;i<k;i++)
        {
            array.erase(array.begin());
            array.push_back(0);
        }
        for(int i=0;i<n;i++)
        {
            cout<<array[i]<<" ";
        }
    
}