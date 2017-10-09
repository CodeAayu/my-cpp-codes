#include <bits/stdc++.h>
using namespace std;
int cnt;
int main()
{
	int y , k , n;
	cin >> y >> k >> n;
	int x = k - y%k , t= n-y;
	if(x <= t)
	{
		cout << x;
		x = x+k;
		while(x <= t)
		{
			cout << " " << x;
			x=x+k;
		}
		cout << endl;
		return 0;
	}
	cout << -1 << endl;
	return 0;
}