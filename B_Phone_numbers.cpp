#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,even = 0,odd = 0;
     cin>>n;
     
     string s;
     cin>>s;
     
     
     for(int i = 0;i < n;i++){
        cout<<s[i];
        
    if( i%2 && i<n-(n%2)-2 ) cout<<'-';
     }
    
    
}
