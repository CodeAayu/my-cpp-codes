#include <bits/stdc++.h>
using namespace std;

long long Fib(long long n)
{
	long long fib[n+1];
	fib[0]=0;
	fib[1]=1;
	for (int i = 2; i < n+1; i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
		fib[i]=fib[i]%10;
	}
	return fib[n];
}

int main()
{
	long long n , y;
	cin >> n;
	y=Fib(n);
	cout << y << endl;
	return 0;
}