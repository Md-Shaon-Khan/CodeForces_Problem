#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    // Reading the input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    bool ans = true;

    // Check that each row has the same color
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {  // Start from 1 to compare with previous element
            if (arr[i][j] != arr[i][0]) {
                ans = false;
                break;
            }
        }
        if (!ans) break;
    }

    // Check that adjacent rows have different colors
    if (ans) {
        for (int i = 0; i < n-1; i++) {  // Start from 1 to compare with previous row
            if (arr[i][0] == arr[i+1][0]) {
                ans = false;
                break;
            }
        }
    }

    if (ans) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
