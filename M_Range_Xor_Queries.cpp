#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, q;
    cin >> n >> q;

    vector<int> array(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> array[i];
    }

    
    vector<int> prefixXor(n+1, 0);
    for (int i = 1; i <= n; i++) 
    {
        prefixXor[i] = prefixXor[i - 1] ^ array[i - 1];
    }

   
    while (q--) 
    {
        int a, b;
        cin >> a >> b;
       
        cout << (prefixXor[b] ^ prefixXor[a - 1]) << endl;
    }

    return 0;
}
