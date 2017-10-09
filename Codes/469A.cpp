#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> a;
	int t , x , j=2;
	while(j--)
	{
		cin >> t;
		for (int i = 0; i < t; i++)
		{
			cin >> x;
			a.push_back(x);
		}
	}
	t=0;
	for (int i = 1; i < n+1; i++)
	{
		for(j=0;j<a.size();j++)
		{
			if(a[j]==i)
			{
				t++;
				break;
			}
		}
	}
	if(t==n)
		cout << "I become the guy." ;
	else
		cout << "Oh, my keyboard!" ;
	return 0;
}