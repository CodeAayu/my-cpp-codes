#include <bits/stdc++.h>
using namespace std;

int arr[100][100];

int mcp(int i , int j)
{
	if(i==0 and j==0)
		return arr[0][0];
	if(i==0)
		return mcp(i,j-1) + arr[i][j];
	if(j==0)
		return mcp(i-1,j) + arr[i][j];
	return arr[i][j] + min( mcp(i-1,j) , min( mcp(i,j-1) , mcp(i-1,j-1) ) );
}

int main()
{
	int n , m , pi ,pj;
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << "Enter the position to reach" << endl;
	cin >> pi >> pj;
	cout << mcp(pi,pj) << endl;
	return 0;
}