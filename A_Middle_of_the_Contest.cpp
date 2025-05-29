#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int h1, m1;
    char colon; 
    cin >> h1 >> colon >> m1;
    
    int h2, m2;
    cin >> h2 >> colon >> m2;
    
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int t3 = (t1 + t2) / 2;
    
    cout << setfill('0') << setw(2) << t3 / 60 << ":"
         << setfill('0') << setw(2) << t3 % 60 << endl;

    return 0;
}
