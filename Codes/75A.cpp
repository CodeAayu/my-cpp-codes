#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
	string s1 , s2 , s3 , s4;
	cin >> s1 >> s2;
	long long t1 , t2 , j=0;
	for (int i = 0; i < s1.length(); i++)
	{
		if(s1[i] != '0')
			{
				s3[j]=s1[i];
				j++;
			}
	}
	j=0;
	for (int i = 0; i < s2.length(); i++)
	{
		if(s2[i] != '0')
			{
				s4[j]=s2[i];
				j++;
			}
	}
	t1 = stoi(s1) + stoi(s2);
	t2 = stoi(s3) + stoi(s4);
	string s5 , s6 = to_string(t1);
	j=0;
	for (int i = 0; i < s6.length(); i++)
	{
		if(s6[i] != '0')
			{
				s5[j]=s6[i];
				j++;
			}
	}
	t1 = stoi(s5);
	if(t1==t2)
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}