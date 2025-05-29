#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
   

    ll t; 
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0;

        for (ll i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 == 0) {
            cout << 0 << "\n";
        } else {
           
            for (ll i = 0; i < n; ++i) {
                ll current = a[i];
                ll operations = 0;
                while (current % 2 == 0) {
                    current /= 2;
                    operations++;
                }
                if (current % 2 != 0) {
                    min_operations = min(min_operations, operations);
                }
            }
            cout << min_operations << "\n";
        }
    }

    return 0;
}
