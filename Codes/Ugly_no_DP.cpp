#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , i2=0, i3=0, i5=0 ;
	cin >> n;
	vector <int> ugly(n);
	ugly[0]=1;
	for (int i = 1; i < n; i++)
	{
		int P=min(2*ugly[i2],min(3*ugly[i3],5*ugly[i5]));
		ugly[i]=P;
		if (P==2*ugly[i2])
		{
			i2++;
		}
		if (P==3*ugly[i3])
		{
			i3++;
		}
		if (P==5*ugly[i5])
		{
			i5++;
		}
	}
	cout << ugly[n-1] ;
	return 0;

}