#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;

    for (int i = 1; i <= test; i++) {
        string a;
        long long b;
        cin >> a >> b;
        
        if (b < 0) b = abs(b);
        long long rim = 0;    
        
        
        for (char c : a) {
            if (c == '-') continue; 
            rim = (rim * 10 + (c - '0')) % b;
        }

       
        if (rim == 0) {
            cout << "Case " << i << ": divisible" << '\n';
        } else {
            cout << "Case " << i << ": not divisible" << '\n';
        }
    }

    return 0;
}
