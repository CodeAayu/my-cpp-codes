#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long r , n , m , n1 , m1 , k=0;
	cin >> n1 >> m1;
	/* For minimum*/
	n = n1;
	m = m1;
	r = n%m;
	n = n/m;
	k = r*(n)*(n+1)/2 + (m-r)*(n-1)*(n)/2;
	cout << k << " ";
	/* For maximum*/
	k = (n1-m1)*(n1+1-m1)/2;
	cout << k << endl;
	return 0; 
}
