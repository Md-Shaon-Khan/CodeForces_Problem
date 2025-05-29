/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t != 0)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a-b == b-c)
        {
            cout<<"YES"<<endl;
        }
        else if(b<a && b<c)
        {
            int x = a+c;
            x = x/2;

            if(x%b==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(a<b && a<c)
        {
            if(b>c)
            {
                int x = b + (b-c);
                if(x%a==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            } 
            else
            {
                int x = b - (c-b);
                if(x%a==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }

            }
        }
        else if(a==b && c>b)
        {
            int x = (a + c);
            if(x%2==0 && (x/2)%b==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }





        t--;
    }




    return 0;
}*/
#include<bits/stdc++.h>
#define speed ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;


int main(){
    speed;
    int test;
    cin >> test;
    while(test--){
        int a,b,c,m;
        cin >> a >> b >> c;
         m=-1;
         
        if((2*b-c)%a==0 && (2*b-c)>0){
            m=(2*b-c)/a;
        }
        else if((a+c)%(2*b)==0){

            m=(a+c)/(2*b);
            
        }
        else if((2*b-a)%c==0 && (2*b-a)>0){

            m=(2*b-a)/c;

        }

        

        if(m==-1){

            cout<<"NO\n";

        }else{

            cout<<"YES\n";

        }


    }
}