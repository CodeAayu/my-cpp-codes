#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , x , ans , a , b , t=1;
	cin >> n >> x;
	while(n--)
	{
		cin >> a >> b;
		while(t<=a)
			t=t+x;
		t=t-x;
		ans=ans+b-t+1;
		t=b+1;
	}
	cout << ans;
	return 0;
}