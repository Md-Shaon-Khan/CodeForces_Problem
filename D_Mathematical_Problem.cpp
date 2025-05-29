#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;

long long evaluateExpression(const string& s, const vector<char>& ops) {
    long long result = 0;
    long long current = s[0] - '0';
    for (int i = 0; i < ops.size(); ++i) {
        if (ops[i] == '+') {
            result += current;
            current = s[i+1] - '0';
        } else { // ops[i] == '×'
            current *= (s[i+1] - '0');
        }
    }
    result += current;
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        long long minResult = LLONG_MAX;

        // Iterate over all possible combinations of operations
        for (int mask = 0; mask < (1 << (n - 1)); ++mask) {
            vector<char> ops;
            for (int i = 0; i < n - 1; ++i) {
                if (mask & (1 << i)) {
                    ops.push_back('+');
                } else {
                    ops.push_back('×');
                }
            }
            long long result = evaluateExpression(s, ops);
            if (result < minResult) {
                minResult = result;
            }
        }

        cout << minResult << endl;
    }
    return 0;
}
