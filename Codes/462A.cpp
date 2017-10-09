#include <bits/stdc++.h>
using namespace std;

int a[104][104];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < n+1; j++)
		{
			char tmp;
			cin >> tmp;
			if(tmp =='o')
				a[i][j]=1;
		}
	}
	for (int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < n+1; j++)
		{
			int t = a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1];
		    if(t%2!=0)
		    {
			    cout << "NO";
			    return 0;
			}
		}
	}
	cout << "YES";
	return 0;
}