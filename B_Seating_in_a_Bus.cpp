// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
 
//     while (t--) {
//         int n;
//         cin >> n;
        
//         int a[n];
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
//         int count=0;
//         for(int i=1;i<n;i++)
//         {
//             int bb= findt(a,0,i-1,i);
            
            
//             if(bb=1)
//             {
//                 cout<<"NO"<<endl;
//                 ++count;
//                 break;
//             }
//              else
//         {
//             cout<<"YES"<<endl;
//         }
        
           
//         }
 
       
        
//     }
 
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// // User-defined function to check if the current seat has a valid neighbor
// bool hasValidNeighbor(int current, const vector<int>& a, int endIndex) {
//     for (int j = 0; j < endIndex; j++) {
//         if (a[current] - a[j] == 1 || a[current] - a[j] == -1) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;
        
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }
        
//         int count = 0;
//         for (int i = 1; i < n; i++) {
//             if (!hasValidNeighbor(i, a, i)) {
//                 cout << "NO" << endl;
//                 ++count;
//                 break;
//             }
//         }

//         if (count == 0) {
//             cout << "YES" << endl;
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// User-defined function to check if the current seat has a valid neighbor
bool hasValidNeighbor(int currentSeat, const unordered_set<int>& occupiedSeats) {
    return occupiedSeats.count(currentSeat - 1) || occupiedSeats.count(currentSeat + 1);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        unordered_set<int> occupiedSeats;
        bool isValid = true;  // Flag to track if the arrangement is valid

        for (int i = 0; i < n; ++i) {
            cin >> a[i];

            // If it's the first seat, it can be occupied without a neighbor
            if (i == 0) {
                occupiedSeats.insert(a[i]);
            } else {
                // For subsequent seats, check if it has a valid neighbor
                if (!hasValidNeighbor(a[i], occupiedSeats)) {
                    isValid = false;
                }
                // Insert the current seat into the occupied set
                occupiedSeats.insert(a[i]);
            }
        }

        // Output the result after processing all passengers
        if (isValid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
