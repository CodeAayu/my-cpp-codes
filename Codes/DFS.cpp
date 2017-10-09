#include <bits/stdc++.h>
using namespace std;
int aayu[4];
vector<vector<int>>g;

void DFS(int n)
{
	if (aayu[n]!=0)
		return;
	aayu[n] = 1;
	cout << n << endl;
	for (int i = 0; i < g[n].size(); i++)
	{
		DFS(g[n][i]);
	}

}

int main()
{
	
	vector<int>tmp = {1,2};
	g.push_back(tmp);
	vector<int>tmp1 = {2};
	g.push_back(tmp1);
	vector<int>tmp2 = {0,3};
	g.push_back(tmp2);
	vector<int>tmp3 = {3};
	g.push_back(tmp3);
	int n;
	cin >> n;

	DFS(n);
	return 0;
}

