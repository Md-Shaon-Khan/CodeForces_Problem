#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        char k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool inserted = false;
        
        for (int i = 0; i < n; i++) {
            if (s[i] < k) {
                s.insert(s.begin() + i, k);
                inserted = true;
                break;
            }
        }

      
        if (!inserted) {
            s.push_back(k);
        }

        cout << s << endl;
    }

    return 0;
}
