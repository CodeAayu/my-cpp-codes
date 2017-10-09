#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a , b , c , x , y , z;
	cin >> a >> b >> c;
	x = sqrt(b*c/a);
	y = sqrt(a*c/b);
	z = sqrt(a*b/c);
	cout << 4*(x+y+z) << endl;
	return 0;
}