/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n, m; cin >> n >> m;
		vector<vector<char>> g(n, vector<char>(m));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> g[i][j];
			}
		}
       
        int r1 = 0, r2 = 0, c1 = 0, c2 = 0, count = 0, count2 = 0, total = 0, t2;

        for (int i = 0; i < n; i++) {
            count2 = 0;
            for (int j = 0; j < m; j++) {
                if (g[i][j] == '#') 
                { // Assuming you meant a character comparison
                    ++count2;
                    if (count == 0) {
                        r1 = i;
                    } else {
                        r2 = i;
                    }
                    if (count2 > total) {
                        total = count2;
                        t2 = i;
                    }
                    ++count;
                }
            }
        }

        int count3 = 0;
        for (int j = 0; j < m; j++) {
            if (g[t2][j] == '#' && count3 == 0) {
                c1 = j;
                ++count3;
            } else if (g[t2][j] == '#') {
                c2 = j;
                ++count3;
            }
        }

        //cout<<r1<<" "<<r2<<" "<<c1<<" "<<c2<<endl;
        

        
            ++r1;
            ++r2;
            ++c1;
            ++c2;

        
        
        r1 = (r1+r2)/2;
        c1 = (c1+c2)/2;

        

        cout<<r1<<" "<<c1<<endl;










        t--;
    }





    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> g(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> g[i][j];
            }
        }

        long long sumRow = 0, sumCol = 0, count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (g[i][j] == '#') {
                    sumRow += i + 1; // 1-based index
                    sumCol += j + 1; // 1-based index
                    count++;
                }
            }
        }

        int r = sumRow / count;
        int c = sumCol / count;

        cout << r << " " << c << endl;
    }

    return 0;
}

