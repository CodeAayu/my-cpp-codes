#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
	if(b==0)
		return a;
	if(a==0)
		return b;
	if(b<=a)
	{
		a=a%b;
		return GCD(a,b);
	}
	b=b%a;
	return GCD(a,b);
}

int main()
{
	long long a, b;
	cin >> a >> b;
	cout << a*b/GCD(a,b) << endl;
	return 0;
}