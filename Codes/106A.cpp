#include <bits/stdc++.h>
using namespace std;

int main()
{
	char a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	if(a[2]==a[0] and a[4]!=a[0])
	{
		cout << "YES" << endl;
		return 0;
	}
	if(a[2]!=a[0] and a[4]==a[0])
	{
		cout << "NO" << endl;
		return 0;
	}
	if(a[2]!=a[4])
	{
		cout << "NO" << endl;
		return 0;
	}
	int t , k;
	if(a[1]=='6')
		t=1;
	else if(a[1]=='7')
		t=2;
	else if(a[1]=='8')
		t=3;
	else if(a[1]=='9')
		t=4;
	else if(a[1]=='T')
		t=5;
	else if(a[1]=='J')
		t=6;
	else if(a[1]=='Q')
		t=7;
	else if(a[1]=='K')
		t=8;
	else if(a[1]=='A')
		t=9;
	if(a[3]=='6')
		k=1;
	else if(a[3]=='7')
		k=2;
	else if(a[3]=='8')
		k=3;
	else if(a[3]=='9')
		k=4;
	else if(a[3]=='T')
		k=5;
	else if(a[3]=='J')
		k=6;
	else if(a[3]=='Q')
		k=7;
	else if(a[3]=='K')
		k=8;
	else if(a[3]=='A')
		k=9;
	if(t>k)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}