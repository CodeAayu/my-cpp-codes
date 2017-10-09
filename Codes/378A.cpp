#include <bits/stdc++.h>
using namespace std;

int w1 , d ,w2;

int main()
{
	int a , b;
	cin >> a >> b;
	for (int i = 1; i < 7; i++)
	{
		if(abs(a-i)>abs(b-i))
			w2++;
		else if(abs(a-i)<abs(b-i))
			w1++;
		else
			d++;
	}
	cout << w1 << " " << d << " " << w2;
	return 0;
}