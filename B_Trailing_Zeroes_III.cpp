#include <iostream>
using namespace std;

 
int findTrailingZeros(int n) {
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
    return count;
}


int findMinimumNWithTrailingZeros(int Q) {
    int low = 0, high = 5 * Q; 
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int zeros = findTrailingZeros(mid);

        if (zeros < Q) {
            low = mid + 1;
        } else if (zeros > Q) {
            high = mid - 1;
        } else {
            result = mid; 
            high = mid - 1;
        }
    }

    
    if (findTrailingZeros(result) == Q) {
        return result;
    } else {
        return -1;  
    }
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int Q;
        cin >> Q;
        
        int N = findMinimumNWithTrailingZeros(Q);

        if (N == -1) {
            cout << "Case " << i << ": impossible" << endl;
        } else {
            cout << "Case " << i << ": " << N << endl;
        }
    }

    return 0;
}
