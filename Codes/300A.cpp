#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , p=0 , pos[3] , tmp;
	cin >> n;
	vector <int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i]>0)
			p++;
	}
	if(p>0)
	{
		for (int i = 0; i < n; i++)
		{
			if(a[i]<0)
			{
				tmp = a[i];
				pos[0]=i;
				break;
			}
		}
		cout << 1 << " " << tmp << endl;
		for (int i = 0; i < n; i++)
		{
			if(a[i]>0)
			{
				tmp = a[i];
				pos[1]=i;
				break;
			}
		}
		cout << 1 << " " << tmp << endl << n-2 << " ";
		for (int i = 0; i < n; i++)
		{
			if(i != pos[0] and i != pos[1])
				cout << a[i] << " ";
		}
		cout << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		if(a[i]<0)
		{
			tmp = a[i];
			pos[0]=i;
			break;
		}
	}
	cout << 1 << " " << tmp << endl;
	for (int i = 0; i < n; i++)
	{
		if(a[i]<0 and i != pos[0])
		{
			tmp = a[i];
			pos[1]=i;
			break;
		}
	}
	cout << 2 << " " << tmp << " ";
	for (int i = 0; i < n; i++)
	{
		if(a[i]<0 and i != pos[0] and i != pos[1])
		{
			tmp = a[i];
			pos[2]=i;
			break;
		}
	}
	cout << tmp << endl << n-3 << " ";
	for (int i = 0; i < n; i++)
	{
		if(i != pos[0] and i != pos[1] and i != pos[2])
			cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}