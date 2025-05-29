#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
   
    while (t--) 
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        
        sort(a.rbegin(), a.rend());

        long long s = 0;
        int rem = k;

        for (int i = 0; i < n; i++) 
        {
            if (i % 2 == 0) 
            {
                s += a[i];
            } 
            else 
            {
                int d = min(rem, a[i - 1] - a[i]);
                a[i] += d;
                rem -= d;
                s -= a[i];
            }
        }
        cout << s << endl;
    }
    return 0;
}
