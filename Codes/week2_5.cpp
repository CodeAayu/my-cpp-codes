#include <bits/stdc++.h>
using namespace std;

long long Fib(long long n , long long m)
{
	int fib[3];
	fib[0]=0;
	fib[1]=1;
	for (int i = 2; i <= n; i++)
	{
		fib[2]=fib[1]+fib[0];
		fib[2]=fib[2]%m;
		fib[0]=fib[1];
		fib[1]=fib[2];
	}
	return fib[2];
}

int main()
{
	unsigned long long n ,m;
	cin >> n >> m;
	cout << Fib(n,m) << endl;
	return 0;
}