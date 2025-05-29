#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int array[n];

        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        int max = *max_element(array,array+n);
        int aa;

        for(int i=0;i<n;i++)
        {
            if(array[i]==max)
            {
               aa=i;
            }

        }

        int second=-1;

        for(int i=0;i<n;i++)
        {
             if(i==aa)
             {
                continue;
             }

             if(second<array[i])
             {
                second = array[i];
             }
        }



        for(int i=0;i<n;i++)
        {
            if(array[i] != max)
            {
                cout<<array[i]-max<<" ";
            }
            else
            {
                cout<<max-second<<" ";
            }
        }


        cout<<endl;



    }





    return 0;
}