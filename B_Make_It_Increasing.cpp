/*#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;

        ll arr[n];
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll count = 0;
        if(n==1)
        {
            count = 0;
        }
        else
        { 
            if(arr[n-1]<n)
            {
                count = -1;
            }
            else
            {
                for(ll i=n-2;i>=0;i--)
             {
                if(arr[i]>=arr[i+1])
                {
                    while(arr[i]>=arr[i+1])
                    {
                        arr[i] = arr[i]/2;
                        ++count;
                    }
                }

             }

            }
             

             
        }
        cout<<count<<endl;








    }








    
}*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll count = 0;
        bool possible = true;

        for (ll i = n - 2; i >= 0; i--) {
            if (arr[i] >= arr[i + 1]) {
                if (arr[i] == 0) {
                    possible = false;
                    break;
                }
                while (arr[i] >= arr[i + 1]) {
                    arr[i] /= 2;
                    count++;
                    if (arr[i] == 0 && arr[i] >= arr[i + 1]) {
                        possible = false;
                        break;
                    }
                }
            }
        }

        if (!possible) {
            cout << -1 << endl;
        } else {
            cout << count << endl;
        }
    }

    return 0;
}
