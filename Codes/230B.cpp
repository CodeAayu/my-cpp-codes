#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long t , i;
	cin >> n;
	while(n--)
	{
		int cnt=1;
		cin >> t;
		for (i = 2; i <= t/2; i++)
		{
			if(t%i==0)
			{
				cnt++;
				break;
			}
		}
		for( ; i <=t/2 ; i++)
		{
			if(t%i==0)
			{
				cnt++;
				break;
			}
		}
		if(cnt==2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}