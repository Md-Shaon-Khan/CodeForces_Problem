
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int test = 1; test <= t; test++) {
        long long a, b;
        cin >> a >> b;

        auto countDivisibleBy3 = [](long long n) {
            if (n == 0) return 0LL;
            int count;
            if (n % 3 == 0) {
                count = n / 3;
            } else {
                count = (n / 3) + 1;
            }
            return n - count;
        };

        long long result = countDivisibleBy3(b) - countDivisibleBy3(a - 1);
        
        cout << "Case " << test << ": " << result << endl;
    }

    return 0;
}
