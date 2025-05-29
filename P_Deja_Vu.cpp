/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t!=0)
    {
        int a,b;
        cin>>a>>b;

        int arr[a];
        int arr2[b];

        for(int i=0;i<a;i++)
        {
            
            cin>>arr[i];
           
        }
        for(int i=0;i<b;i++)
        {
             cin>>arr2[i];
        }

        for(int i=0;i<b;i++)
        {
            for(int j=0;j<a;j++)
            {
                int xx = arr2[i];
                int r = pow(2,xx);
                if(arr[j]%r==0)
                {
                    arr[j] += pow(2,xx-1);

                }
            }
        }


        for(int i=0;i<a;i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<endl;

        t--;
    }






    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        vector<int> arr(a);
        vector<int> arr2(b);
        unordered_map<int, int> power2;

        for (int i = 0; i < a; ++i) {
            cin >> arr[i];
        }

        for (int i = 0; i < b; ++i) {
            cin >> arr2[i];
            power2[arr2[i]] = pow(2, arr2[i]);
        }

        for (int i = 0; i < b; ++i) {
            int xx = arr2[i];
            int r = power2[xx];
            int increment = power2[xx - 1];

            for (int j = 0; j < a; ++j) {
                if (arr[j] % r == 0) {
                    arr[j] += increment;
                }
            }
        }

        for (int i = 0; i < a; ++i) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
