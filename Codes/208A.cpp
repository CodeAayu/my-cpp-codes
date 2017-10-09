#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int l=s.length() ,t=0;
	for (int i = 0; i < l; i++)
	{
		if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
			{
				if(t==1)
					{
						cout << " " ;
						t=0;
					}
				i = i + 2;
			}
		else
			{
				cout << s[i] ;
				t=1;
			}
	}
	return 0;
}