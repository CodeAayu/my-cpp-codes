#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k , l , c , d , p , nl , np , s , a , b;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	s = (c*d)/n; 
	a = (k*l)/(nl*n);
	b = p/(np*n);
	cout << min(s,min(a,b));
	return 0;
}