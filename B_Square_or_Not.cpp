
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        string s;
        cin >> n >> s;

        int r = sqrt(n);

        
        if (r * r != n) {
            cout << "No" << endl;
            continue;
        }

        bool isBeautiful = true;

        
        for (int i = 0; i < r; i++) {
            
            if (s[i] != '1' || s[(r - 1) * r + i] != '1') 
            {
                isBeautiful = false;
                break;
            }
            
            if (s[i * r] != '1' || s[i * r + r - 1] != '1') {
                isBeautiful = false;
                break;
            }
        }

        if (isBeautiful) {
          
            for (int i = 1; i < r - 1; i++) {
                for (int j = 1; j < r - 1; j++) {
                    if (s[i * r + j] != '0') {
                        isBeautiful = false;
                        break;
                    }
                }
                if (!isBeautiful) break;
            }
        }

        if (isBeautiful) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
