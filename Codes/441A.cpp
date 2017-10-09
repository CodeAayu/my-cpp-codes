#include <bits/stdc++.h>
using namespace std;

int tmp[50];

int main()
{
	int n , v ,p=0;
	cin >> n >> v;
	vector <int> a;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		for(int j=0;j<t;j++)
			cin >> tmp[j];
		sort(tmp,tmp+t);
		if(tmp[0]<v)
		{
			a.push_back(i+1);
		}
	}
	cout << a.size() << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}