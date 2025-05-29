#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;

     while(t!=0)
     {
         int n;
         cin>>n;
         
         vector<int>new_A(100001, 0);
         int a[n];

         
         for(int j=0;j<n; j++)
         {
            cin>>a[j];


            new_A[a[j]]++;
         }

         int max=*max_element(new_A.begin(),new_A.end());
        
         int ans = n-max;
         cout<< ans <<'\n';


         t--;
     }


     return 0;
}