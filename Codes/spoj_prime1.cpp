#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n , m;
		cin >> m >> n;
		vector <int> a(m+n);
		a[0]=1;
		a[1]=1;
		long long tmp=sqrt(n)+1;
		for (long long i = 2; i <= tmp; i++)
		{
			if(a[i] == 0)
			{
				for (long long j = 2; j <= n/i+1; j++)
				{
					a[i*j]=1;
				}
			}
		}
		for (long long i = m; i <= n; i++)
		{
			if(a[i]==0)
				cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}