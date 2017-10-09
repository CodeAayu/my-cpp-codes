#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	long long mn = -2000000000 , mx = 2000000000;
	while(n--)
	{
		string s;
		cin >> s;
		long long t;
		cin >> t;
		char c;
		cin >> c;
		if(c=='N')
		{
			if(s==">=")
				s="<";
			else if(s=="<=")
				s=">";
			else if(s==">")
				s="<=";
			else
				s=">=";
		}
		if(s=="<=")
			mx=min(t,mx);
		else if(s==">=")
			mn=max(t,mn);
		else if(s=="<")
			mx=min(t-1,mx);
		else
			mn=max(t+1,mn);
		if(mn>mx)
		{
			cout << "Impossible" << endl;
			return 0;
		}
	}
	cout << (mx+mn)/2 << endl;
	return 0;
}