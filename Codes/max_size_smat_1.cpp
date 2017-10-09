#include <bits/stdc++.h>
using namespace std;
int arr[101][101] , a;
int main()
{
	int n , m , ms=1;
	cin >> n >> m;
	vector <vector <int> > in(1);
	for (int i = 1; i < m+1;i++)
	{
		for(int j=1;j <= n ; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i < m+1; i++)
	{
		for (int j = 1; j < n+1; j++)
		{
			if(arr[i][j]==1)
			{
				a = 1 + min( arr[i-1][j-1] , min( arr[i-1][j] , arr[i][j-1] ) );
				arr[i][j] = a;
				ms=max(ms,a);
			}
		}
	}
	cout << ms << endl;
	return 0;
}