#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m , cnt=0 , cnt1=0 , a;
	cin >> n >> m;
	while(n--)
	{
		cin >> a;
		if(a==1)
			cnt++;
		else 
			cnt1++;
	}
	cnt=min(cnt , cnt1)*2;
	int t1 , t2;
	while(m--)
	{
		cin >> t1 >> t2;
		printf((t2 - t1) % 2 == 1 and t2 - t1 < cnt ? "1\n" : "0\n");
	}
	return 0;
}