#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m ,t=0;
	cin >> n >> m;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		t=t+a[i];
	}
	int x=(m-t);
	t=t+(n-1)*10;
	
	if(t > m)
	{
		cout << "-1";
		return 0;
	}
	cout << x/5;
	return 0;
}