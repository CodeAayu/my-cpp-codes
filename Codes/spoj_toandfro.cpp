#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(true)
	{
		cin >> n;
		if(n==0)
			return 0;
		string s;
		cin >> s;
		int tn=0 , tm=s.length()/n;
		char a[n][tm];
		for (int i = 0; i < tm; i++)
		{
			if(i%2==0)
			{
				for(int j=0; j < n ; j++)
				{
					a[j][i]=s[tn];
					tn++;
				}

			}
			else
			{
				for(int j=n-1 ; j >=0 ; j--)
				{
					a[j][i]=s[tn];
					tn++;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			for(int j=0; j < tm; j++)
				cout << a[i][j];
		}
		cout << endl;
	}
}