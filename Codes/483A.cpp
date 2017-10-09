#include <bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long a , b;
	cin >> a >> b;
	if(b-a==1 or b-a==0)
	{
		cout << -1;
		return 0;
	}
	if(b-a==2)
	{
		if(a%2==0)
		{
        	cout << a << " " << a+1 << " " << b;
        	return 0;
        }
        cout << -1;
        return 0;
	}
	if(a%2==0)
	{
		cout << a << " " << a+1 << " " << a+2;
		return 0;
	}
	cout << a+1 << " " << a+2 << " " << a+3;
	return 0;
}