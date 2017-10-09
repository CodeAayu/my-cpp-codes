#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m , v=0;
	cin >> n >> m;
	vector <int> a(n);
	vector <int> b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	int mx=0 , mn=100000, mn1=b[0];
	for (int i = 0; i < n; i++)
	{
		mx=max(mx,a[i]);
		mn=min(mn,a[i]);
	}
	for (int i = 1; i < m; i++)
	{
		mn1=min(mn1,b[i]);
	}
	v=max(2*mn , mx);
	if(v<mn1)
		cout << v << endl;
	else 
		cout << "-1" << endl;
	return 0;
}