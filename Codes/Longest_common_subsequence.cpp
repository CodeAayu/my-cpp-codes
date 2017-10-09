#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1 , s2;
	cin >> s1 >> s2;
	int n1=s1.length() , n2=s2.length();
	vector <vector <int> > a(n2+1);
	for (int i = 0; i < n2+1; i++)
		a[i].resize(n1+1);
	for (int i = 1; i <= n2; i++)
	{
		for (int j = 1; j <= n1; j++)
		{
			if(s1[j-1]==s2[i-1])
				a[i][j] = 1+min(a[i-1][j],a[i][j-1]);
			else
				a[i][j] = max(a[i-1][j],a[i][j-1]);
		}
	}
	for (int i = 1; i <= n2; i++ )
	{
		for(int j=1 ; j <= n1 ; j++)
			cout << a[i][j] << " ";
		cout << endl; 
	}
	cout << a[n2][n1] << endl;
	return 0;
}