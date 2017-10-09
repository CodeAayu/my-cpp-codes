#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , c, dif , md=0;
	cin >> n >> c;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++)
	{
		dif = a[i] - a[i+1];
		md = max(md,dif);
	}
	if(md-c > 0)
		cout << md - c;
	else
		cout << 0;
	return 0;
}