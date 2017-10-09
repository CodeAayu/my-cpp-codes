#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , cs1=1 , cs2=0;
	string s1 , s2 , s3;
	cin >> n >> s1;
	for (int i = 1; i < n; i++)
	{
		cin >> s2;
		if(s2==s1)
			cs1++;
		else
		{
			cs2++;
			s3=s2;
		}
	}
	if(cs1>cs2)
		cout << s1 << endl;
	else
		cout << s3 << endl;
	return 0; 
}