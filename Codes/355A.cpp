#include <bits/stdc++.h>
using namespace std;

int main()
{
	int k , d;
	cin >> k >> d;
	if(k==1)
	{
		cout << d << endl;
		return 0;
	}
	if(d==0)
	{
		cout << "No solution" << endl;
		return 0;
	}
	cout << 1;
	for (int i = 0; i < k-2; i++)
	{
		cout << 0;
	}
	cout << d-1 << endl;
	return 0;
}