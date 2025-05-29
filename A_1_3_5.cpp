/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    

    while(t != 0)
    {
        int n;
        cin>>n;
        int count=0;
        if(n%5==0 || n%3==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            
            while(n<!3)
            {
               
                if(n%3==0 || n%5==0)
                {
                    cout<<"0"<<endl;
                    ++count;
                    break;
                }
                else
                {
                     n = n-3;
                }
                
            }
            if(count != 0)
            {
                cout<<n<<endl;
            }
            

            
        }
        






        t--;
    }










    return 0;
}*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int readInt() {
    int x;
    cin >> x;
    return x;
}

int main() {
    vector<int> ans(101, INT_MAX);
    ans[0] = 0;
    int d[3] = {1, 3, 5};
    int c[3] = {1, 0, 0};
    
    for (int i = 0; i < ans.size(); ++i) {
        for (int j = 0; j < 3; ++j) {
            if (i + d[j] < ans.size()) {
                ans[i + d[j]] = min(ans[i + d[j]], ans[i] + c[j]);
            }
        }
    }

    int t = readInt();
    while (t--) {
        int n = readInt();
        cout << ans[n] << endl;
    }

    return 0;
}
