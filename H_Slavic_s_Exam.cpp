#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t; 
    cin >> t;
    while(t--) 
    {
        string s, b; 
        cin >> s >> b;
    	int count = 0;
        int size = s.size();
    	for(int i = 0; i < size; ++i) 
        {
    		if(s[i] == '?') 
            {
    			if(count < (int)b.size())
                {
                     s[i] = b[count++];
                } 
                  
    			else 
                {
                    s[i] = 'b';
                }
    		} 
            else if(s[i] == b[count]) 
             {
                 s[i] = b[count++];
             }   
    	}
    	if(count >= b.size()) {
                cout << "YES\n" << s << "\n";
        }
           
    	else {
                  cout << "NO\n";
        }
     
    }

    return 0;
}