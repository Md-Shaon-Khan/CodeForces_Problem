#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int xc, yc, k;
        cin >> xc >> yc >> k;
        vector<pair<int, int>> points;

        // Generate the first k-1 points near the center
        for (int i = 0; i < k - 1; i++) {
            points.push_back({xc + i, yc});
        }

        // Adjust the last point
        points.push_back({xc - (k - 1) * (k / 2), yc});

        // Output the points
        for (auto &p : points) {
            cout << p.first << " " << p.second << endl;
        }
    }

    return 0;
}
