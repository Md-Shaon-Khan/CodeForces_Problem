#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to determine if the array can be made non-decreasing by removing one element
bool canRemoveOneElement(const vector<int>& a) {
    int n = a.size();
    vector<int> prefixGCD(n), suffixGCD(n);
    
    prefixGCD[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefixGCD[i] = gcd(prefixGCD[i - 1], a[i]);
    }
    
    suffixGCD[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        suffixGCD[i] = gcd(suffixGCD[i + 1], a[i]);
    }
    
    for (int i = 0; i < n; ++i) {
        int leftGCD = (i == 0) ? 0 : prefixGCD[i - 1];
        int rightGCD = (i == n - 1) ? 0 : suffixGCD[i + 1];
        int combinedGCD = gcd(leftGCD, rightGCD);
        if (i > 0 && combinedGCD < prefixGCD[i - 1]) continue;
        if (i < n - 1 && combinedGCD > suffixGCD[i + 1]) continue;
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        if (canRemoveOneElement(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
