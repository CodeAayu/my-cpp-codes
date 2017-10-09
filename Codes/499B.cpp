#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m;
	cin >> n >> m;
	vector <string> a(m);
	vector <string> b(m);
	vector <string> c(m);
	for (int i = 0; i < m; i++)
	{
		cin >> a[i] >> b[i];
		if(b[i].length()<a[i].length())
			c[i]=b[i];
		else
			c[i]=a[i];
	}
	while(n--)
	{
		int i;
		string tmp;
		cin >> tmp;
		for (i = 0; i < m; i++)
		{
			if(tmp == a[i])
				break;
		}
		cout << c[i] << " ";
	}
	cout << endl;
	return 0;
}