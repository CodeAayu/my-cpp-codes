#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k , a , c=0;
	cin >> n >> k;
	k = 5-k;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if(a<=k)
			c++;
	}
	cout << c/3;
	return 0;
}