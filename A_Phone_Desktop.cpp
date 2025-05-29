/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int x,y;
        cin>>x>>y;

        int total=0,empty;

        if(y==0)
        total = 0;

        else 
        total = y / 2 + y % 2;

        if(y%2==1)
        {
                empty = 11 + (y/2)*7;
        }
        else
        {
                empty = (y/2)*7;
        }
        if(empty>=x)
        {
            
            
            total +=0;
        }
        else
        {
            if(y==0 && x != 0)
           {
            if(x<=15)
                total = 1;
                else if(x%15==0)
                {
                    total = x/15;
                }
                else
                {
                    total = x/15 + 1;
                }
           }
            else if(x%empty==0)
            {
                total += x/empty;
                total -= 1;
            }
            else
            {
                total += (x/empty) ;
                
                

            }
            
        }


        cout<<total<<endl;
        









       t--;


    }

    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int nt;
    cin >> nt;
    
    for (int t = 0; t < nt; ++t) {
        int x, y;
        cin >> x >> y;

        int mm = (y + 1) / 2;
        x -= (mm * 5 * 3 - y * 2 * 2);
        x = max(x, 0);
        mm += (x + 5 * 3 - 1) / (5 * 3);
        
        cout << mm << endl;
    }
    
    return 0;
}



