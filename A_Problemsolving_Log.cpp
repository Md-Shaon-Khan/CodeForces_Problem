// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         vector<char> v(n);

//         for(int i = 0; i < n; i++) {
//             cin >> v[i];
//         }

       
//         sort(v.begin(), v.end());

      
//         set<char> s(v.begin(), v.end());

//         int count = 0;
//         for(auto it : s) { 
//             int a = (int)it; 
//             if(n >= (a - 64)) {
//                 ++count;
//                 n -= (a - 64);
//             } else {
//                 break;
//             }
//         }

//         cout << count << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int sol = 0;

       
        for (int i = 0; i < 26; i++) 
        {
            char problem = 'A' + i;
            int countt = count(s.begin(), s.end(), problem);

          
            if (countt >= i + 1) 
            {
                sol++;
            }
        }

        cout << sol << endl;
    }

    return 0;
}
