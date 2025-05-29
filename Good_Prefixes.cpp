#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int good_pre = 0;

        for (int i = 0; i < n; i++) {
            long long sum = accumulate(a.begin(), a.begin() + i + 1, 0LL);
            bool is_good = false;

            for (int j = 0; j <= i; j++) {
                if (sum - a[j] == a[j]) {
                    is_good = true;
                    break;
                }
            }

            if (is_good) {
                good_pre++;
            }
        }

        cout << good_pre << endl;
    }

    return 0;
}

