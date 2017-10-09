#include <bits/stdc++.h>
using namespace std;

int main()
{
	int r1 , c1 , r2 , c2;
	cin >> r1 >> c1 >> r2 >> c2;
	
	if((r1-r2)==0 or (c1-c2)==0) //for rook or hathi
		cout << 1 << " ";
	else
		cout << 2 << " ";

	if( (r1+c1)%2 != (r2+c2)%2)
		cout << 0 << " ";
	else if(r1 + c1 == r2 + c2 or r1 + c2 == r2 + c1)  //for bishop or unth
		cout << 1 << " ";
	else
		cout << 2 << " ";

	cout << max(abs(r2-r1),abs(c2-c1)) << endl;
	return 0;
}