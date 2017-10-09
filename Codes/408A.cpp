#include <bits/stdc++.h>
using namespace std;

int A[100];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	vector <vector <int> > a;
	for (int i = 0; i < n; i++)
	{
		vector <int> tmp;
		for(int j=0; j < A[i] ; j++)
		{
			int ten;
			cin >> ten;
			tmp.push_back(ten);
		}
		a.push_back(tmp);
	}
	vector <int> sol(n);
	for (int i = 0; i < n; i++)
	{
		for(int j=0; j < A[i] ; j++)
		{
			sol[i]=sol[i] + a[i][j]*5;
		}
		sol[i] = sol[i] + A[i]*15;
	}
	sort(sol.begin(),sol.end());
	cout << sol[0] << endl;
	return 0;
}