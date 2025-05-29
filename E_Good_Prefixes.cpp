#include <iostream>
using namespace std;
int main()
{
	int t; 
    cin >> t;
	while(t--)
    {
		int n; 
        cin >> n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
            cin >> a[i];
        }	
		long long sum = 0;
		int maax = 0, ans = 0;
		for(int i = 0; i < n; i++)
        {
			sum += a[i];
			maax > a[i] ? maax = maax : maax = a[i];
			
            if(sum - maax == maax)
            {
               ans++;
            } 
				
		}
		cout<<ans<<endl;
	}
}