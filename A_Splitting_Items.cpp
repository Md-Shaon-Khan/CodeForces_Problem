// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;

//         int arr[a];
//         for(int i=0;i<a;i++)
//         {
//             cin>>arr[i];
//         }

//         sort(arr,arr+a);

//         for(int i=0;i<a;i++)
//         {
//             if(arr[a-1]-arr[i]<=b)
//             {
//                 arr[i] += (arr[a-1]-arr[i]);
//                 b -= (arr[a-1]-arr[i]);
//             }
//             else
//             {
//                 arr[i] += b;
//                 b -= b;
//             }
//         }


//         int sum1=0,sum2=0;

//         for(int i=a-1;i>=0;i=i-2)
//         {
//             sum1 += arr[i];
//         }
//         for(int i=a-2;i>=0;i=i-2)
//         {
//             sum2 += arr[i];
//         }

//         cout<<sum1-sum2<<endl;







//     }






//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         sort(arr.begin(), arr.end()); 
        
//         for (int i = 0; i < n - 1 && k > 0; i++) {
//             int increase = min(k, arr[n - 1] - arr[i]);
//             arr[i] += increase;
//             k -= increase;
//         }

//         int sumAlice = 0, sumBob = 0;
        
//         for (int i = n - 1; i >= 0; i -= 2) {
//             sumAlice += arr[i];
//         }
        
        
//         for (int i = n - 2; i >= 0; i -= 2) {
//             sumBob += arr[i];
//         }

//         cout << sumAlice - sumBob << endl;
//     }

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         sort(arr.begin(), arr.end()); 
        
//         for (int i = 0; i < n - 1 && k > 0; i++) {
//             // Calculate how much we can increase the current item
//             int increase = min(k, arr[n - 1] - arr[i]);
//             arr[i] += increase;
//             k -= increase;
//         }

//         int sumAlice = 0, sumBob = 0;
        
//         // Alice picks the largest items first
//         for (int i = n - 1; i >= 0; i -= 2) {
//             sumAlice += arr[i];
//         }
        
//         // Bob picks the remaining items
//         for (int i = n - 2; i >= 0; i -= 2) {
//             sumBob += arr[i];
//         }

//         cout << sumAlice - sumBob << endl;
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, k;
//         cin >> n >> k;

//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         sort(arr.begin(), arr.end());

//         for (int i = 0; i < n - 1 && k > 0; i++) {
//             int diff = arr[n-1] - arr[i];
//             int increase = min(k, diff);
//             arr[i] += increase;
//             k -= increase;
//         }

//         int sumAlice = 0, sumBob = 0;
//         for (int i = n - 1; i >= 0; i -= 2) {
//             sumAlice += arr[i];
//         }
//         for (int i = n - 2; i >= 0; i -= 2) {
//             sumBob += arr[i];
//         }

//         cout << sumAlice - sumBob << endl;
//     }

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        
        for (int i = 0; i < n - 1 && k > 0; i++) {
            int diff = arr[n-1] - arr[i];
            int increase = min(k, diff);  
            arr[i] += increase;
            k -= increase;
        }

        
        int sumAlice = 0, sumBob = 0;
        for (int i = n - 1; i >= 0; i -= 2) {
            sumAlice += arr[i];
        }
        for (int i = n - 2; i >= 0; i -= 2) {
            sumBob += arr[i];
        }

        cout << sumAlice - sumBob << endl;
    }

    return 0;
}
