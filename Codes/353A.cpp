#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , su=0 , sl =0;
	cin >> n;
	vector <int> a(n);
	vector <int> b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		su = su + a[i];
		sl = sl + b[i];
	}
	if(su%2 == 0 and sl%2 == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	if(su%2 != sl%2)
	{
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if(a[i]%2 != b[i]%2)
		{
			cout << 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}