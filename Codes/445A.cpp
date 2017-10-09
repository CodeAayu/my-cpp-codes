#include <bits/stdc++.h>
using namespace std;
int a[102][102];
int main()
{
	int n , m;
	cin >> n >> m;
	string s;
	for (int i = 1; i < n+1; i++)
	{
		for (int j = 1; j < m+1; j++)
		{
			cin >> s[0];
			if(s[0] == '.')
				a[i][j]=1;
		}
	}
	for (int i = 1; i < n+1; i++)
	{
		for(int j=1 ; j < m+1 ; j++)
		{
			if(a[i][j]==0)
				cout << "-";
			else if((i+j)%2==0)
				cout << "B";
			else
				cout << "W";
		}
		cout << endl; 
	}
	return 0;
}