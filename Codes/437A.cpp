#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <pair <int,string> > a(4);
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i].second;
		a[i].first = a[i].second.length() - 2;
	}
	sort(a.begin(),a.end());
	if(2*(a[0].first) <= a[1].first and a[3].first >= 2*(a[2].first))
	{
		cout << "C" << endl;
		return 0;
	}
	if(2*(a[0].first) <= a[1].first)
	{
		string s = a[0].second;
		cout << s[0] << endl;
		return 0;
	}
	if(a[3].first >= 2*( a[2].first ) )
	{
		string s = a[3].second;
		cout << s[0] << endl;
		return 0;
	}
	cout << "C" << endl;
	return 0;
}