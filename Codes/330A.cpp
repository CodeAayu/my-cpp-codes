#include <bits/stdc++.h>
using namespace std;

int r , c , rw[11] , cl[11] , ck;

int main()
{	
	cin >> r >> c;
	string aa;
	for (int i = 0; i < r; i++)
	{
		cin >> aa;
		for( int j=0; j < c; j++)
		{
			if(aa[j]=='S')
			{
				rw[i] = 1;
				cl[j] = 1;
			}
		}
	}
	for (int i = 0; i < r; i++)
	{
		for(int j=0; j < c ; j++)
		{
			if(rw[i]==0 or cl[j]==0)
			{
				ck++;
			}
		}
	}
	cout << ck;
	return 0;
}