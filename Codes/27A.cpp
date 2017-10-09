#include <bits/stdc++.h>
using namespace std;

int a[3000];

int main()
{
	int n;
	cin >> n;
	for(int i=0 ; i < n ; i++)
	{
		int tmp;
		cin >> tmp;
		a[tmp-1]++;
	}
	for (int i = 0; i < 3001; i++)
	{
		if(a[i]==0)
		{
			cout << i+1 << endl;
			return 0;
		}
	}
	cout << 3001 << endl;
	return 0;
}