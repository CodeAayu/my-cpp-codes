#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		if(str.length() < 11)
			cout << str << endl;
		else
		{
			int l = str.length() - 2;
			cout << str[0] << l << str[l+1] << endl;
		}
	}
	return 0;

}