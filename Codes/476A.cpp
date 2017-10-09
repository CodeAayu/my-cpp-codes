#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m ;
	cin >> n >> m;
	if(m > n)
	{
		cout << "-1";
		return 0;
	}
	int a , b;
	a = n/2 + n%2;
	if(a%m==0)
	{
		cout << a;
		return 0;
	}
	b = a/m +1;
	b = b*m;
	if((b-a) > (a-n%2))
	{
		cout << "-1";
		return 0;
	}
	cout << b;
	return 0;
}