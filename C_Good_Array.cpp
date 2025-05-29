#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e6;
int main() 
{
    int n;
    cin >> n;

    vector<int> a(n);         
    vector<int> cnt(MAX + 1);  

    long long sum = 0;        

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        cnt[a[i]]++;
    }

    vector<int> ans;  

    
    for (int i = 0; i < n; ++i) 
    {
        sum -= a[i];        
        cnt[a[i]]--;          

        
        if (sum % 2 == 0 && sum / 2 <= MAX && cnt[sum / 2] > 0) {
            ans.push_back(i + 1); 
        }
        sum += a[i];          
        cnt[a[i]]++;       
    }

   
    cout << ans.size() << endl;
    for (int index : ans) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}
