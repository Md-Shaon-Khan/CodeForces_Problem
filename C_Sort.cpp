/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a,n;
        string a1,a2;

        cin>>a1>>a2;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int p,q;
            string a3,a4;
            a3 = a1;
            a4 = a2;
            cin>>p>>q;
            int pp = p-1, qq = q-1;
            sort(a3.begin()+pp,a3.begin()+qq);
            sort(a4.begin()+pp,a4.begin()+qq);
            int count=0;
            for(int i=pp;i<qq;i++)
            {
                if(a3[i]!=a4[i])
                {
                   ++count;
                }
            }

            cout<<count<<endl;
        }







    }





    return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n,k;
        cin >> n;
        string a1, a2;

        cin >> a1 >> a2;
        

        for (int i = 1; i <= k; i++) {
            int p, q;
            cin >> p >> q;
            int pp = p - 1, qq = q - 1;
            string a3 = a1, a4 = a2;

            // Sort the substrings
            sort(a3.begin() + pp, a3.begin() + qq + 1);
            sort(a4.begin() + pp, a4.begin() + qq + 1);

            int count = 0;
            for (int j = pp; j <= qq; j++) {
                if (a3[j] != a4[j]) {
                    ++count;
                }
            }

            cout << count << endl;
        }
    }

    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;
        string a1, a2;
        cin >> a1 >> a2;

        
           vector<vector<int>> prefix_a(n + 1, vector<int>(26, 0));
           vector<vector<int>> prefix_b(n + 1, vector<int>(26, 0));

            for (int i = 0; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                prefix_a[i + 1][j] = prefix_a[i][j];
                prefix_b[i + 1][j] = prefix_b[i][j];
            }
            prefix_a[i + 1][a1[i] - 'a']++;
            prefix_b[i + 1][a2[i] - 'a']++;
        }

            while (q--) 
            {
            int l, r;
            cin >> l >> r;

            
            vector<int> count_a(26, 0), count_b(26, 0);
            for (int j = 0; j < 26; j++) {
                count_a[j] = prefix_a[r][j] - prefix_a[l - 1][j];
                count_b[j] = prefix_b[r][j] - prefix_b[l - 1][j];
            }

            
            int changes = 0;
            for (int i = 0; i < 26; i++) {
                changes += abs(count_a[i] - count_b[i]);
            }

           
            cout << changes / 2 << endl;
        }
    }

    return 0;
}
