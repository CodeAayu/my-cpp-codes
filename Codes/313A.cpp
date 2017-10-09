#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s , s1 ,s2 ,s3;
	cin >> s;
	if(s>=0)
	{
		cout << s;
		return 0;
	}
	s3 = s/100;
	s1 = s/10;
	s2 = 10*s3 + s%10;
    cout << max(s1,s2);
	return 0;

}