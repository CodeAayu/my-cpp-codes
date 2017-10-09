#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m , k;
	cin >> n >> m >> k;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(),a.end());
	int t=m-k;
	for (int i = n-1; i >= 0; i--)
	{
		if(t<1)
		{
			cout << n-i-1 << endl;
			return 0;
		}
		t=t-a[i]+1;
	}
	if(t<1)
	{
		cout << n << endl;
		return 0;
	}
	cout << -1 << endl;
	return 0;
} 