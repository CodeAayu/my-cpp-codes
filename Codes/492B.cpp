#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n , l;
	float md=0 , d;
	cin >> n >> l;
	vector <long long> a(n+2);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	a[0]=0;
	a[n+1]=l;
	sort(a.begin(),a.end());
	for (int i = 0; i < n+1; i++)
	{
		d=a[i+1]-a[i];
		if(i==0 or i==n)
			d=d*2;
		md=max(d,md);
	}
	cout << setprecision(9) << md/2 << endl;
	return 0;
}