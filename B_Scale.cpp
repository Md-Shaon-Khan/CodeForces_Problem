#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    

    while( t != 0)
    {
        int n,k;

        cin>>n>>k;

        char array[n][n];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>array[i][j];
            }
        }

    

        for(int i=0;i<n;i=i+k)
        {
            for(int j=0;j<n;j=j+k)
            {
                cout<<array[i][j];

            }
            cout<<endl;
        }




        t--;
    }






    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t != 0) {
        int n, k;
        cin >> n >> k;

        char array[n][n];

        // Reading the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> array[i][j];
            }
        }

        // Processing and printing the reduced grid
        for (int i = 0; i < n; i += k) {
            for (int j = 0; j < n; j += k) {
                cout << array[i][j] ;
            }
            cout << endl;
        }

        t--;
    }

    return 0;
}
*/