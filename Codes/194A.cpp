#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , k , tmp;
	cin >> n >> k;
	tmp=k;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		a[i]=2;
		tmp=tmp-2;
	}
	int i=0;
	while(tmp)
	{
		if(i==n)
			i=0;
		a[i]=a[i]+1;
		tmp--;
		i++;
	}
	int cnt=0;
	for(auto u:a)
		if(u==2)
			cnt++;
	cout << cnt << endl;
	return 0;
}