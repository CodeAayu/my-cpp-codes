#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i1=0 , i2=0 , i;
	for (i = 0; i < n; i++)
	{
		if(s[i]=='R')
		{
			i1=i+1;
			break;
		}
	}
	if(i==n)
	{
		for (i = 0; i < n; i++)
		{
			if(s[i]=='L')
			{
				i1=i;
				break;
			}
		}
		for( ; i < n ; i++)
		{
			if(s[i]=='.')
			{
				cout << i << " " << i1 << endl;
				return 0; 
			}
		}
		if(i==n)
		{
			cout << n << " " << i1 << endl;
		}
	}
	for( ; i < n; i++)
	{
		if(s[i]=='L')
		{
			cout << i1 << " " << i << endl;
			return 0;
		}
	}
	for (i = i1; i < n; i++)
	{
		if(s[i]=='.')
		{
			cout << i1 << " " << i+1 << endl;
			return 0;
		}
	}
	cout << i1 << " " << n << endl;
	return 0;
}