#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int l = s.length();
	int i , tt , me=10 , po=0 , lo = s[l-1] - '0' ;
	for (i = 0; i < l-1; i++)
	{
		tt = s[i] - '0';
		if(tt%2==0)
		{
			po = i;
			me=tt;
			i++;
			break;
		}
	}
	if(me==10)
	{
		cout << -1 << endl;
		return 0;
	}
	if(me < lo)
	{
		char tmp = s[po];
		s[po] = s[l-1];
		s[l-1] = tmp;
		cout << s << endl;
		return 0;
	}
	for( ; i < l-1 ; i++)
	{
		tt = s[i] - '0';
		if(tt%2==0)
		{
			if(tt<lo)
			{
				char tmp = s[i];
				s[i]=s[l-1];
				s[l-1]=tmp;
				cout << s << endl;
				return 0;
			}
			else
			{
				po = i;
			}
		}
	}
	char tmp = s[po];
	s[po] = s[l-1];
	s[l-1] = tmp;
	cout << s << endl;
	return 0;
}