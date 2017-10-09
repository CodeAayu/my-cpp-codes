#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , t1 ,t2 , dif=10000;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	dif=abs(a[0]-a[n-1]);
	t1=1 ; t2=n;
	for (int i = 1; i < n; i++)
	{
		if(abs(a[i]-a[i-1])<dif)
		{
			t1=i;
			t2=i+1;
			dif=abs(a[i]-a[i-1]);
		}
	}
	cout << t1 << " " << t2 << endl;
	return 0;
}