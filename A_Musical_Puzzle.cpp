#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		string s;
		set<string> st;
		scanf("%d", &n);
		cin >> s;
		for (int i = 0; i < n - 1; i++)
			st.insert(s.substr(i, 2));
		cout << st.size() << endl;
	}
}