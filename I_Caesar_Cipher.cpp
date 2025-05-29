#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;

    int len1 = a.size();
    int len2 = b.size();

    bool ok = 0;

    if(len1 == len2)
    {
        int len = (a[0]-b[0]+26)%26;

        for(int i=0;i<len1;i++)
        {
            if((a[i]-b[i]+26)%26 != len)
            {
                ok = 1;
                break;
            }
        }
    }
    else
    {
        ok = 1;
    }

    if(ok==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

    return 0;
}
