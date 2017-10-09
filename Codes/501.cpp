#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a , b , c , d;
	cin >> a >> b >> c >> d;
	int V=0 , M=0;
	V=max( 3*b/10 , b - (b*d)/250);
	M=max( 3*a/10 , a - (a*c)/250);
	if(V>M)
		cout << "Vasya" << endl;
	else if(M>V)
		cout << "Misha" << endl;
	else
		cout << "Tie" << endl;
	return 0;
}