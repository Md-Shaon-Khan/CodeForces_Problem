#include <bits/stdc++.h>
using namespace std;
bool matchesTemplate(const vector<int>& a, const string& s) 
{
    if (a.size() != s.size()) 
    {
        return false; 
    }
    
    unordered_map<int, char> numToChar;
    unordered_map<char, int> charToNum;
    
    for (int i = 0; i < a.size(); ++i) 
    {
        int num = a[i];
        char ch = s[i];
        
        if (numToChar.find(num) == numToChar.end()) 
        {
            numToChar[num] = ch;
        } else if (numToChar[num] != ch) 
        {
            return false;
        }
        
        if (charToNum.find(ch) == charToNum.end()) 
        {
            charToNum[ch] = num;
        } else if (charToNum[ch] != num) 
        {
            return false; 
        }
    }
    
    return true;
}

int main() 
{
    int t;
    cin>>t;

    while (t--) 
    {
        int n;
        cin>>n;
        
        vector<int>a(n);
        for (int i=0;i<n;++i) 
        {
            cin>>a[i];
        }
        
        int m;
        cin >> m;
        
        while (m--) 
        {
            string s;
            cin >> s;

            if (matchesTemplate(a, s)) 
            {
                cout <<"YES"<<endl;
            } else 
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
