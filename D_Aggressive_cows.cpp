#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n, p;
        cin >> n >> p;
        int array[n];

        for (int i = 0; i < n; i++) 
        {
            cin >> array[i];
        }

        sort(array, array + n);

        int l = 1, h = array[n-1] - array[0], ans = 0;

        while (l <= h) 
        {
            int mid = (l + h) / 2;
            int count = 1, last_pos = array[0];

            for (int i = 1; i < n; i++) 
            {
                if (array[i] - last_pos >= mid) 
                {
                    count++;
                    last_pos = array[i];
                }
            }

            if (count >= p) 
            {
                ans = mid;
                l = mid + 1;
            } 
            else 
            {
                h = mid - 1;
            }
        }

        cout << ans << endl;
    }

}