#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) 
    {
        char arr[8][8];

        for(int i=0;i<8;i++) 
        {
            for(int j=0;j<8;j++) 
            {
                cin>>arr[i][j];
            }
        }

        bool r = false;

        for(int i=0;i<8;i++) 
        {
            bool rr = true;

            for(int j=0;j<8;j++) 
            {
                if (arr[i][j]!='R') 
                {
                    rr = false;
                    break;
                }
            }
            if (rr==true) 
            {
                r = true;
                break;
            }
        }

        
        if (r==true) 
        {
            cout<<"R"<<endl; 
        } 
        else 
        {
            cout<<"B"<<endl; 
        }
    }




    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
// 	cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while(t--) 
//     {
//         char arr[8][8];

//         for(int i=0;i<8;i++) 
//         {
//             for(int j=0;j<8;j++) 
//             {
//                 cin>>arr[i][j];
//             }
//         }

        
//         int ansR = 0,ansB=0;
//         for(int i=7;i>=0;i--) 
//         {
//            for(int j=7;j>=0;j--) 
//             {
//                 if(arr[j][i]=='B')
//                 {
//                     ansB=1;
//                     break;
//                 }
//                 else if(arr[j][i]=='R')
//                 {
//                     ansR=1;
//                     break;

//                 }
                
//             }
//             if(ansB)
//             {
//                 cout<<"B"<<endl;
//                 break;
//             }
//             else if(ansR)
//             {
//                 cout<<"R"<<endl;
//                 break;
//             }
            
//         }

        
       
//     }




//     return 0;
// }
