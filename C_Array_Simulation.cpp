#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb push_back

int main()
{
    int t;
    cin >> t;
    for (int ii = 1; ii <= t; ii++)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        while (m--)
        {
            char c;
            cin >> c;
            if (c == 'S')
            {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++)
                {
                    v[i] += d;
                }
            }
            else if (c == 'M')
            {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++)
                {
                    v[i] *= d;
                }
            }
            else if (c == 'D')
            {
                int d;
                cin >> d;
                for (int i = 0; i < n; i++)
                {
                    v[i] /= d;
                }
            }
            else if (c == 'P')
            {
                int x, y;
                cin >> x >> y;
                swap(v[x], v[y]);
            }
            else if (c == 'R')
            {
                reverse(v.begin(), v.end());
            }
        }

        cout << "Case " << ii << ":" << endl;
        for (int a : v)
        {
            cout << a << " ";
        }
        cout << endl;
    }
 return 0;
}