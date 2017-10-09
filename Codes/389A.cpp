#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	while(1)
	{
		if(a[n-1]==a[0])
			break;
		a[n-1]=a[n-1]-a[0];
		sort(a.begin(),a.end());
	}
	cout << n*a[0] << endl;
	return 0;
}