#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin>>t;

    string s;
    for (int i = 0; i < 18; i++) 
    {
        s += "Yes";
    }

    
    while (t--) 
    {
       string s1;
       cin>>s1;

        if (s.find(s1) != string::npos) 
        {
            cout << "YES" << endl;
        } 
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
