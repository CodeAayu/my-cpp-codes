#include <bits/stdc++.h>
using namespace std;

long long l , r , pos;
int main()
{
	vector <int> a;
	char c;
	while(cin >> c)
	{
		int tmp;
		if(c=='^')
			tmp = 15;
		else if(c=='=')
			tmp = 0;
		else
			tmp = c - '0';
		a.push_back(tmp);
	}
	for (int i = 0; i < a.size(); i++)
	{
		if(a[i]==15)
		{
			pos = i;
			break;
		}
	}
	for (int i = 0; i < pos; i++)
	{
		l = l + a[i]*(pos-i);
	}
	for (int i = pos+1; i < a.size(); i++)
	{
		r = r + a[i]*(i-pos);
	}
	if(l>r)
	{
		cout << "left" << endl;
		return 0;
	}
	if(r>l)
	{
		cout << "right" << endl;
		return 0;
	}
	cout << "balance" << endl;
	return 0;
}