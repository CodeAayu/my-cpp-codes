#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long r , x , y , x1 , y1;
	cin >> r >> x >> y >> x1 >> y1;
	long long x2=x1-x , y2 =y1-y;
	double d=sqrt((double)(x2*x2+y2*y2));
	cout << (long long int)ceil(d/(2*r)) << endl;
	return 0;
}