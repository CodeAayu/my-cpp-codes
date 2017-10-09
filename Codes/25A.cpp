#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , ev=0 , pe=0 , od=0 , po=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		if(tmp%2==0)
			{
				ev++;
				pe = i+1;
			}
		else
			{
			    od++;
			    po = i+1;
			}
		if(od >= 2 and ev==1)
		{
			cout << pe;
			return 0;
		}
		if(od==1 and ev>=2)
		{
			cout << po;
			return 0;
		}
	}
}