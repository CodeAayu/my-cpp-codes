#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k , f , t , m=0 , mx=(-10000000000);
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> f >> t;
		if(t>k)
			m=f-t+k;
		else
			m=f;
		mx=max(mx,m);
	}
	cout << mx;
	return 0;
}