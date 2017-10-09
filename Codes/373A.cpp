#include <bits/stdc++.h>
using namespace std;
int cnt[10];
int main()
{
	int n , tmp1=0;
	cin >> n;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char tmp;
			cin >> tmp;
			if(tmp != '.')
			{
				tmp1 = tmp - '0';
				cnt[tmp1]++;
			}
		}
	}
	for (int i = 1; i < 10; i++)
	{
		if(cnt[i]>2*n)
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}