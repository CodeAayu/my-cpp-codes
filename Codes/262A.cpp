#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k , c=0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int cnt=0;
		string s;
		cin >> s;
		for(int j=0; j<s.length() ; j++)
		{
			if(s[j]=='4' or s[j]=='7')
			{
				cnt++;
			}
		}
		if(cnt<=k)
			c++;
	}
	cout << c << endl;
	return 0;
}