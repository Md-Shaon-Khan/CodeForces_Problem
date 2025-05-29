#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAX = 200'007;  
ll res[MAX];  
ll S(ll x) 
{
    ll sum = 0;
    while (x > 0) 
    {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}

int main() 
{
    
    res[0] = 0;
    for (int i = 1; i < MAX; i++) {
        res[i] = res[i - 1] + S(i);
    }

    int t;
    cin >> t;  
    while (t--) 
    {
        ll n;
        cin >> n;

        if (n < MAX) 
        {
            cout << res[n] << '\n'; 
        } 
        else
        {
           
            ll sum = 0;
            for (ll i = MAX; i <= n; ++i) 
            {
                sum += S(i);
            }
            cout << res[MAX - 1] + sum << '\n';  
        }
    }

    return 0;
}
