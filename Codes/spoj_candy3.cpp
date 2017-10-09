#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n , t , c , h;
	cin >> n;
	while(n--)
	{
		cin >> t;
		h=0;
		for (int i = 0; i < t; i++)
		{
			cin >> c;
			h=(h+c)%t;
		}
		if(h%t==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}