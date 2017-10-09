#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;

int main()
{
	long long n , tmp=0;
	cin >> n;
	vector <ii> a;
	vector <int> b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	for (int i = 1; i < n; i++)
	{
		if( b[i-1] < b[i] )
			a.push_back(ii(b[i-1],b[i]) );
		else
			a.push_back(ii(b[i],b[i-1]) );
	}
	for (int i = 0; i < a.size(); i++)
	{
		for (int j = i; j < a.size(); j++)
		{
			if(a[i].first == a[j].first or a[i].second == a[j].second)
				continue;
			if(a[i].first < a[j].first and a[j].first < a[i].second and a[i].second < a[j].second)
			{
				cout << "yes" << endl;
				return 0;
			}
			if(a[j].first < a[i].first and a[i].first < a[j].second and a[j].second < a[i].second)
			{
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;
	return 0;
}