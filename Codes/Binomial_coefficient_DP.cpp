#include <bits/stdc++.h>
using namespace std;

long long arr[100][100];

long long bicf(int n , int k)
{
	if(arr[n][k] != -1)
		return arr[n][k];
	if(k==0 or k==n)
		return 1;
	return arr[n][k] = bicf(n-1,k-1) + bicf(n-1,k);
}

int main()
{
	memset(arr,-1,sizeof(arr));
	int n , k;
	cin >> n >> k;
	cout << bicf(n,k);
	return 0;
}