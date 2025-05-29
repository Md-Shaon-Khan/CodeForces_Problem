#include<bits/stdc++.h>
using namespace std;
int main()
{

  
	
	int n, m;
	cin >> n >> m;
	map <string,string> mymap;
	for(int i = 0 ; i < n; i++){
		string a, b;
		cin >> a >> b;
		b+=';';
		mymap[b]=a;
	}
	for(int i = 0 ; i < m; i++){
		string a, b;
		cin >> a >> b;
		cout << a << " " << b<<" "<<"#"<<mymap[b]<<endl;
	}

	
    return 0;

}