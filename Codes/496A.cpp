#include <bits/stdc++.h>
using namespace std;

int a[100] , i , d , md1;

int main()
{
	int n , md2=10000000;
	cin >> n;
	while(cin >> a[i])
		i++;
	for (i = 1; i < n; i++)
	{
		d=a[i]-a[i-1];
		md1=max(md1,d);
	}
	for (i = 2; i < n; i++)
	{
		d=a[i]-a[i-2];
		md2=min(md2,d);
	}
	cout << max(md1,md2);
	return 0;
}