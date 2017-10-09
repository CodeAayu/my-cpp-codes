#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m ,c=0;
	cin >> n >> m;
	vector <string> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < m ; j++)
		{
			int tmp=0;
			for(int k = 0; k < n ; k++)
			{
				if( a[i][j] >= a[k][j])
					tmp++;
				else
					break;
			}
			if(tmp == n)
			{
				c++;
				break;
			}
		}
	}
	cout << c << endl;
	return 0;	
}