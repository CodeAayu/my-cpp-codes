#include <bits/stdc++.h>
using namespace std;

vector <vector <unsigned int> > a(1000000 , vector <unsigned int>(1000000));

unsigned int bicf(int n , int k)
{
	if(a[n][k]!= 0)
		return a[n][k];
	if(k==0 or k==n)
		return 1;
	return a[n][k] = bicf(n-1,k-1) + bicf(n-1,k);
}

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < 1000000; i++)
		for(int j = 0; j < 1000000; j++)
			a[i][j]=0;
	while (t--)
	{
		long long n , k;
		cin >> n >> k;
		cout << bicf(n-1,n-k) << endl;
	}
	return 0;
}