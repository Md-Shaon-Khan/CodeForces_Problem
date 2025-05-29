/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        long long int n,answer;
        cin>>n;

        long long int array[n];

        for(long long int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        sort(array,array+n);
        answer = array[0]*array[1];
        for(long long int i=0;i<n-1;i++)
        {
            for(long long int j=i+1;j<n;j++)
            {
                if(array[i]*array[j] > answer)
                answer = array[i]*array[j];


            }
        }

        cout<<answer<<endl;












        t--;
    }

    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;

    while(t != 0) 
    {
        long long int n;
        cin>>n;

        vector<long long int>array(n);

        for(long long int i=0;i<n;i++) 
        {
            cin>>array[i];
        }

        
        sort(array.begin(), array.end());

       
        long long int max1 = array[0] * array[1];
        long long int max2 = array[n - 1] * array[n - 2];

       
        long long int answer = max(max1, max2);

        cout<<answer<<endl;

        t--;
    }

    return 0;
}
