// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int n,q;
//         cin>>n>>q;

//         int array[n];

//         for(int i=0;i<n;i++)
//         {
//             cin>>array[i];

//         }
//         while(q--)
//         {
//             int a,b,c;
//             cin>>a>>b>>c;

//             int sum =0;

//             for(int i=0;i<n;i++)
//             {
//                 if(i>=a-1 && i<=b-1)
//                 {
//                     sum += c;
//                 }
//                 else
//                 {
//                     sum += array[i];
//                 }

//             }

//             if(sum %2==1)
//             {
//                 cout<<"YES"<<endl;
//             }
//             else
//             {
//                 cout<<"NO"<<endl;
//             }
//         }













//     }








//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> array(n);
        vector<long long> prefix_sum(n + 1, 0);
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> array[i];
            sum += array[i];
            prefix_sum[i + 1] = prefix_sum[i] + array[i];
        }

        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            l--; r--; 
          
            long long range_sum = prefix_sum[r + 1] - prefix_sum[l];

            
            long long new_sum = sum - range_sum + (long long)(r - l + 1) * k;

            
            if (new_sum % 2 == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
