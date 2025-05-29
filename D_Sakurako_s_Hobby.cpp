#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> p[i];
            p[i]--; 
        }

        string s;
        cin >> s;

        vector<vector<int>> Nb(n);
        vector<int> c(n, 0);
        vector<int> F(n);

        
        for (int i = 0; i < n; i++) {
            Nb[i].push_back(p[i]);
        }

        
        for (int i = 0; i < n; i++) 
        {
            if (c[i] == 0) 
            {
                
                vector<int> cp;
                stack<int> stk;
                stk.push(i);
                c[i] = 1; 

                while (!stk.empty()) 
                {
                    int node = stk.top();
                    stk.pop();
                    cp.push_back(node);

                    for (int next : Nb[node]) 
                    {
                        if (c[next] == 0) {
                            stk.push(next);
                            c[next] = 1; 
                        }
                    }
                }

               
                int bc = 0;
                for (int node : cp) 
                {
                    if (s[node] == '0') 
                    {
                        bc++;
                    }
                }

                
                for (int node : cp) 
                {
                    F[node] = bc;
                }
            }
        }

        
        for (int i = 0; i < n; i++) 
        {
            cout << F[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
