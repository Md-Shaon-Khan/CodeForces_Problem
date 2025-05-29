#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int n,c,d;
        cin>>n>>c>>d;

        int array[n*n];

        for(int i=0;i<n*n;i++)
        {
            
            cin>>array[i];
            

        }

        n = n*n;
        
       sort(array,array+n);
      
       
       
       
       int count=0;
       int sum = array[0] + array[n-1];
       for(int i=1;i<n;i++)
       {
          
          int sum1 = array[i] + array[n-1-i];

          if(sum != sum1)
          {
            ++count;
            break;
          }

        
       }

       if(count==0)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }




        t--;
    }







    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, c, d;
    cin >> n >> c >> d;
    map<ll, ll> m;
    
    // Reading the input and populating the map
    for (ll i = 0; i < n * n; ++i) {
        ll x;
        cin >> x;
        m[x]++;
    }
    
    // Initialize p to the smallest element
    ll p = m.begin()->first;
    m[p]--;
    
    for (ll i = 0; i < n; ++i) {
        ll q = p;
        for (ll j = 0; j < n - 1; ++j) {
            if (m[q + d] == 0) {
                cout << "NO" << endl;
                return;
            }
            m[q + d]--;
            q += d;
        }
        if (m[p + c] == 0 && i < n - 1) {
            cout << "NO" << endl;
            return;
        }
        m[p + c]--;
        p += c;
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
        solve();
    return 0;
}*/
