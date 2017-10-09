#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s , s1 , s2;
	cin >> s;
	s1 = s.substr(0,2);
	s2 = s.substr(3,4);
	int a , b;
	a = stoi(s1);
	b = stoi(s2);
	if(a==23 and b > 32)
	{
		cout << "00:00" << endl;
		return 0;
	}
	if(a>15 and a<20)
	{
		cout << "20:02" << endl;
		return 0;
	}
	if(a>5 and a<10)
	{
		cout << "10:01" << endl;
		return 0;
	}
	if(a==15 and b>50)
	{
		cout << "20:02" << endl;
		return 0;
	}
	if(a==5 and b>49)
	{
		cout << "10:01" << endl;
		return 0;
	}
	if(a/10 == 0)
		cout << 0;
	int t;
	t=a/10 + 10*(a%10);
	if(b>=t)
	{
		cout << a+1 << ":" << (a+1)/10 + 10*((a+1)%10) << endl;
		return 0;
	}
	cout << a << ":" << a/10 + 10*(a%10) << endl;
	return 0;
}