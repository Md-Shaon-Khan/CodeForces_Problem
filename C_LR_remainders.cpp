// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main()
// {
//     ll t;
//     cin>>t;

//     while (t--)
//     {
//         ll n,m;
//         cin>>n>>m;

//         vector<ll>arr;
//         for(ll i=0;i<n;i++)
//         {
//             ll x;
//             cin>>x;
//             arr.push_back(x);
//         }

//         string s;
//         cin>>s;

        
//         for(ll i=0;i<n;i++)
//         {
//             ll sum=1;

//             for(ll i=0;i<arr.size();i++)
//             {
//                 sum = (sum * arr[i]) % m;
//             }
            
//             //sum = sum % m;
//             cout<<sum<<" ";
            
//             if(s[i]=='L')
//             {
//                 arr.erase(arr.begin());
//             }
//             else
//             {
//                 arr.pop_back();
//             }
            

//         }
//         cout<<endl;

    
//     }
    






//     return 0;
// }





// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ll t;
//     cin >> t;

//     while (t--) {
//         ll n, m;
//         cin >> n >> m;

//         vector<ll> arr(n);
//         for (ll i = 0; i < n; ++i) {
//             cin >> arr[i];
//         }

//         string s;
//         cin >> s;

//         ll product = 1;
//         for (ll i = 0; i < n; ++i) {
//             product = (product * arr[i]) % m;
//         }

//         ll left = 0, right = n - 1;
//         for (ll i = 0; i < n; ++i) {
//             cout << product << " ";
//             if (s[i] == 'L') {
//                 product = (product * pow(arr[left], m - 2, m)) % m;
//                 left++;
//             } else {
//                 product = (product * pow(arr[right], m - 2, m)) % m;
//                 right--;
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n, m;
//         cin >> n >> m;
//         vector<int> a(n);
//         for (int i = 0; i < int(n); i++)
//         cin >> a[i];
//         string s;
//         cin >> s;

//         int l = 0, r = n - 1;
//         for (int i = 0; i < int(n); i++)
//         {
//             if (s[i] == 'L')
//                 l++;
//             else
//                 r--;
//         }

//         vector<int> b(n);
//         b[n - 1] = a[l] % m;

//         for (int i = n - 2; i >= 0; i--) {
//             if (s[i] == 'L')
//                 b[i] = (b[i + 1] * a[--l]) % m;
//             else
//                 b[i] = (b[i + 1] * a[++r]) % m;
//         }

//         for (int i = 0; i < int(n); i++)
//         cout << b[i] << " ";
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);

    long t; cin >> t;
    while(t--){
        long n, m; cin >> n >> m;
        vector<pair<long, long> > v(n);
        for(long p = 0; p < n; p++){cin >> v[p].second;}
        string s; cin >> s;
        long left(0), right(n - 1);
        for(long p = 0; p < s.size(); p++){
            if(s[p] == 'L'){v[left++].first = n - p;}
            else{v[right--].first = n - p;}
        }

        sort(v.begin(), v.end());
        vector<long> w(n);
        long cur(1);
        for(long p = 0; p < n; p++){
            cur *= v[p].second; cur %= m;
            w[n - 1 - p] = cur;
        }

        for(long p = 0; p < n; p++){printf("%ld ", w[p]);}
        puts("");
    }

}