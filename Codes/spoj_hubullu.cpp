#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t , n , h;
	cin >> t;
	while(t--)
	{
		cin >> n >> h;
		if(h==0)
			cout << "Airborne wins." << endl;
		else
			cout << "Pagfloyd wins." << endl;
	}
	return 0;
}