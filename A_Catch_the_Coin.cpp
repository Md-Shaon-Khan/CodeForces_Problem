#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (y >= -1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
