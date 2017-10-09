#include <bits/stdc++.h>
using namespace std;

int A[50][50];
int main()
{
	int n , m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++)
	{
		if(A[0][i]==1 or A[n-1][i]==1)
		{
			cout << 2 << endl;
			return 0;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if(A[i][0]==1 or A[i][m-1]==1)
		{
			cout << 2 << endl;
			return 0;
		}
	}
	cout << 4 << endl;
	return 0;
}