#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	while(n--)
	{
		long long b;
		cin >> b;
		long long tmp , ans=0;
		tmp=b/5;
		while(tmp)
		{
			ans = ans + tmp;
			tmp=tmp/5;
		}
		cout << ans << endl;
	}
	return 0;
}