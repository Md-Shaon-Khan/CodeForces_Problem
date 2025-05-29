#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; 
    cin >> t;
    while(t--) 
    {
        string s, t; 
        cin >> s >> t;
    	int count = 0;
        int size = s.size();
    	for(int i = 0; i < size; ++i) 
        {
    		if(s[i] == '?') 
            {
    			if(count < (int)t.size()) 
                   s[i] = t[count++];
    			else s[i] = 'a';
    		} 
            else if(s[i] == t[count]) 
                ++count;
    	}
    	if(count >= t.size()) 
           cout << "YES\n" << s << "\n";
    	else 
           cout << "NO\n";
    }

    return 0;
}