#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <pair<int,int>> a;
	for (int i = 0; i < n; i++)
	{
	 	int x , y;
	 	cin >> x >> y;
	 	auto tmp = make_pair(x,y);
	 	a.push_back(tmp);
	}
	sort(a.begin(),a.end());
	for (int i = 1; i < n; i++)
	{
		if(a[i].second<a[i-1].second)
		{
			cout << "Happy Alex";
			return 0;
		}
	}
	cout << "Poor Alex";
	return 0;
}