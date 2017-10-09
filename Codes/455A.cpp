#include <bits/stdc++.h>
using namespace std;

int cntar[100001];
long long ans[100001];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		cntar[tmp]++;
	}
	for(long long i=1 ; i < 100002 ; i++)
	{
		ans[i]=i*cntar[i];
		if(i>2)
			ans[i]=ans[i]+ans[i-2];
		ans[i]=max(ans[i],ans[i-1]);
	}
	cout << ans[100000] << endl;
	return 0;
}