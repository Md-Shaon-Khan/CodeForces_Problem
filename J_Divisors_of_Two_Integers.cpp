// #include<bits/stdc++.h>
// using namespace std;
//  vector<int> arr;
// int main()
// {
//     int n;
//     cin>>n;

   
//     for(int i=0;i<n;i++)
//     {
//         int p;
//         cin>>p;
//         arr.push_back(p);
//     }

    
//     sort(arr.begin(),arr.end());
//     int x = arr[arr.size()-1];
//     cout<<x<<" ";
   
//     int a = arr[arr.size()-1];

//     for(int i=n-1;i>=0;i--)
//     {
//         if(arr[i]==arr[i-1])
//         {
//             continue;
//         }
//         if(a%arr[i]==0)
//         {
//             arr.erase(arr.begin()+1);
//         }
//     }

//     int y = arr[arr.size()-1];
//     cout<<y<<endl;

    





   
// }


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
   
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    sort(arr.begin(), arr.end());

   
    int x = arr.back();  
    cout << x << " ";

    
    vector<int> remaining;
    for(int i = 0; i < n; i++) {
        if(x % arr[i] != 0 || arr[i] == arr[i+1]) {
            remaining.push_back(arr[i]);  
        }
    }

   
   
        int y = remaining.back(); 
    cout<<y<<endl;
    return 0;
}
