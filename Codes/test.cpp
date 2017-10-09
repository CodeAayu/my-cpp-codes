#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long tmp=2;
	while(true)
	{
		int cnt=0;
		for (int i = 2; i < tmp; i++)
		{
			if(tmp%i==0)
			{
				cnt=1;
			}
		}
		if(cnt==0)
			cout << tmp << endl;
		tmp++;
	}
	return 0;
}