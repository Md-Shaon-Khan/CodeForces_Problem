/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        sort(arr,arr+n);
        
        
    
        int count = 1,Total=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[i+1])
            {
                ++count;
                
               
            }
            else
                {
                    Total += count / 3;
                    count=0;
                }
           

        }
         cout<<Total<<endl;
        

        t--;
    }


    return 0;
}
#include <iostream>
using namespace std;

int main(){ 
  int t; 
  cin >> t;
  while(t--) {
    int n; 
    cin >> n; 
    int a[101] = {0}; // Use an array of size 101
    for (int i = 0; i < n; i++) {
      int x; 
      cin >> x;
      a[x]++;
    }
    int sum = 0;
    for (int i = 0; i < 101; i++) 
      sum += a[i] / 3;
    cout << sum << "\n";
  }
}*/
#include <bits/stdc++.h>

using namespace std;

int main(){ 
  int t; 
  cin >> t;
  while(t--) {
    int n; 
    cin >> n; 
    vector<int> a(101, 0);
    for (int i = 0; i < n; i++) {
      int x; 
      cin >> x;
      a[x]++;
    }
    int sum = 0;
    for (auto& s : a) 
      sum += s / 3;
    cout << sum << "\n";
  }
}
