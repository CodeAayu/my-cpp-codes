#include <bits/stdc++.h>
using namespace std;

int a[100] , n;
int i , j , k , c1;

int main()
{
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		if(a[i]==1)
			c1++;
	}
	if(c1==n)
	{
		cout << c1-1;
		return 0;
	}
	for (i = 0; i < n; i++)
	{
		if(a[i]==0)
			{
				j=0;
				for (int l = i; l < n; l++)
				{
					if(a[l]==0)
						j++;
					else
						j--;
					k=max(k,j);
					if(j<0)
						break;
				}
				while(a[i]==0)
					i++;
			}
	}
	cout << k+c1;
	return 0;
}