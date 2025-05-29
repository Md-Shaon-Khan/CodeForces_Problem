// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;

//     while(t--)
//     {
//         int a[2],x[2];
//         cin>>a[0]>>a[1]>>x[0]>>x[1];
        
//         int sum = 0;
        
//         sort(a,a+2);
//         sort(x,x+2);

//         if(a[0]>x[0] && (a[0]<x[1]))
//         ++sum;
//         else if(a[0]>x[0] && (a[0]>x[1]))
//         sum += 2;

        

//         if(a[1]>x[1] && a[0]>x[1])
//         sum += 2;
//         else if(a[1]>x[1] && a[0]<x[1])
//         ++sum;
        
//         // if(b>y)
//         // {
//         //     sum++;
//         // }

//         cout<<sum<<endl;
//     }






//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a[2], b[2];
        cin >> a[0] >> a[1] >> b[0] >> b[1];
        
        
        pair<int, int> suneetCards[2] = { {a[0], a[1]}, {a[1], a[0]} };
        pair<int, int> slavicCards[2] = { {b[0], b[1]}, {b[1], b[0]} };
        
        int waysSuneetWins = 0;

       
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                int suneetWins = 0;
                int slavicWins = 0;

                
                if (suneetCards[i].first > slavicCards[j].first)
                    ++suneetWins;
                else if (suneetCards[i].first < slavicCards[j].first)
                    ++slavicWins;

                
                if (suneetCards[i].second > slavicCards[j].second)
                    ++suneetWins;
                else if (suneetCards[i].second < slavicCards[j].second)
                    ++slavicWins;

               
                if (suneetWins > slavicWins)
                    ++waysSuneetWins;
            }
        }

        cout << waysSuneetWins << endl;
    }

    return 0;
}
