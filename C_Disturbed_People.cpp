#include<bits/stdc++.h>
using namespace std;
int main()
{

      int n;
      cin>>n;

      int array[n];

      for(int i=0;i<n;i++)
      {
        cin>>array[i];

      }
       int count=0;
      for(int i=1;i<n-1;i++)
      {
        if(array[i]==0 && array[i-1]==1 && array[i+1]==1)
        {
            array[i+1]=0;
            
            ++count;
        }
      }

      cout<<count;





}