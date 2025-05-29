#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int l, r;
        cin >> l >> r;
        int result = static_cast<int>(log2(r)); 
        cout << result << endl;
    }
    return 0;
}
