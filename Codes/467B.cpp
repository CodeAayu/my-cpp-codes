#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m , k , tmp , cnt=0;
	cin >> n >> m >> k;
	vector <string> a(m+1);
	for (int i = 0; i < m+1; i++)
	{
		cin >> tmp;
		a[i] = bitset<20>(tmp).to_string();
	}
	for (int i = 0; i < m; i++)
	{
		tmp=0;
		for (int j = 0; j < 20; j++)
		{
			if(a[m][j] != a[i][j])
				tmp++;
		}
		if(tmp <= k)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}