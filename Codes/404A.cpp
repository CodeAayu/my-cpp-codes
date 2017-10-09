#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n ;
	cin >> n;
	char a[300][300];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
	{
		if( a[i][i] != a[i][n-i-1] or a[i][i] != a[0][0] or a[i][n-i-1] != a[0][0])
		{
			cout << "NO";
			return 0;
		}
		for(int j=0;j<n;j++)
		{
			if((j!=i) and j!=(n-i-1) and (a[i][j]==a[0][0] or a[i][j]!=a[0][1]) )
			{
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}