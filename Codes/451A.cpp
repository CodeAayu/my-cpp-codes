#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n , m , mn;
	cin >> n >> m;
	mn = min(n,m);
	if(mn%2==0)
		cout << "Malvika" ;
	else
		cout << "Akshat" ;
	return 0;
}