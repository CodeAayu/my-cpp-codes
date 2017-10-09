#include <bits/stdc++.h>
using namespace std;

int GCD(long a, long b)
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
	long a, b;
	cin >> a >> b;
	cout << GCD(a,b) << endl;
	return 0;
}