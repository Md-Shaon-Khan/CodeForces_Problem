#include <bits/stdc++.h>
using namespace std;
 int main()
 {
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        int a[n];
        
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++)
        {
           int b;
           cin >> b;
        
           if(b == 0)
           {
              continue;
           }
          
           string S;
           cin >> S;
        
           for(int j = 0; j < b; j++)
           {
              if(S[j] == 'U')
              {
                a[i]--;
              }
              else if(S[j] == 'D')
              {
                a[i]++;
              }
              
              if(a[i] < 0)
              {
                a[i]+=10;
              }
              if(a[i] > 9)
              {
                a[i]-=10;
              }
           }
        }
       
        for(int i = 0; i < n; i++)
        {
          cout << a[i] << " ";
        }
        
        cout << endl;
        
    }
    return 0;
}