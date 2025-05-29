#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 0) {
         
            cout << "-1\n";
        } else {
            vector<int> permutation(n);
            int current = n;

          
            permutation[0] = current--;
            
          
            for (int i = 1; i < n; ++i) {
                permutation[i] = i;
            }

            
            for (int i = 0; i < n; i++) {
                cout << permutation[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
