#include <bits/stdc++.h>
using namespace std;

int arr[100][100];

int mcp(int i , int j)
{
	int t[100][100];
	t[0][0]=arr[0][0];
	for (int k = 1; k <= i; k++)
		t[k][0]=t[k-1][0]+arr[k][0];
	for (int k = 1; k <= j; k++)
		t[0][k]=t[0][k-1]+arr[0][k];
	for (int k = 1; k <= i; k++)
		{
			for(int s=0 ; s <= j; s++)
				t[k][s]=min(t[k-1][s-1],min(t[k-1][s], t[k][s-1])) + arr[k][s];
		}
		return t[i][j];
}

int main()
{
	int n , m , pi ,pj;
	cout << "Enter the size of array(<101)" << endl;
	cin >> n >> m;
	cout << "Enter the array." << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "Enter the position to reach" << endl;
	cin >> pi >> pj;
	cout << "Minimum cost=" << mcp(pi,pj) << endl;
	return 0;
}