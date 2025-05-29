#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        
        // vector<char> s;
        string s;
        cin>>s;
        // set<char> s_set;  
        // for (int i = 0; i < n; i++) {
        //     char a;
        //     cin >> a;
        //     a = tolower(a);  
        //    // s.push_back(a);
        //     s_set.insert(a);
        // }

        transform(s.begin(), s.end(), s.begin(), [](unsigned char c)
        {
             return tolower(c);
        });
        s.erase(unique(s.begin(),s.end()),s.end());
        // for (char c : s) 
        // {
        //     cout << c ;
        // }
        //cout << endl;
        string meowSet = {'m', 'e', 'o', 'w'};

        if(s==meowSet)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }




    }




    return 0;
}

