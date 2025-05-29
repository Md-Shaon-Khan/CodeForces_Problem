#include <bits/stdc++.h>
using namespace std;
int main(){
    int T; cin >> T;

    while (T--) {

        int n; cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (a[0] == a[n - 1]) {
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << "\n";
            char s[n];
            for(int i=0;i<n;i++)
            {
                s[i] = 'R';
            } 
            s[1] = 'B';
            s[n] = '\0';
            cout << s << "\n";

        }

        
    }
}