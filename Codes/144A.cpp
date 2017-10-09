#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> aayu(n);
	for (int i = 0; i < n; i++)
	{
		cin >> aayu[i];
	}

	int min = INT_MAX, max = INT_MIN , pos_min = 0 , pos_max = 0;
	for (int i = 0; i < n; i++)
	{
		if(aayu[i]<=min)
		{
			min = aayu[i];
			pos_min = i;
		}
		if(aayu[i]>max)
		{
			max = aayu[i];
			pos_max = i;
		}	
	}

	if(pos_min<pos_max)
		cout << pos_max + n - 2 - pos_min ;
	else
		cout << pos_max + n - 1 - pos_min ;
	return 0;
}