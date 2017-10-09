#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n==0)
	{
		cout << "O-|-OOOO" << endl;
		return 0;
	}
	while(n)
	{
		int t=n%10;
		if(t>4)
		{
			cout << "-O|" ;
			t = t-5;
		}
		else
			cout << "O-|" ;
		int x=t;
		while(x--)
		{
			cout << "O";
		}
		cout << "-";
		t=4-t;
		for (int i = 0; i < t; i++)
		{
			cout << "O";
		}
		cout << endl;
		n=n/10;					
	}
	return 0;
}