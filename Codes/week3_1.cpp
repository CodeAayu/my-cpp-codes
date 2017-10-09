#include <bits/stdc++.h>
using namespace std;

int Coins(int n)
{
	int i , j , k;
	i=n/10;
	j=n%10;
	return i+j/5+j%5;
}

int main()
{
	int n;
	cin >> n;
	cout << Coins(n) << endl;
	return 0;
}