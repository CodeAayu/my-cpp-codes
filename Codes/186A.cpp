#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1 , s2;
	cin >> s1 >> s2;
	if(s1.length() != s2.length())
	{
		cout << "NO" << endl;
		return 0;
	}
	int i , pi , flag=0;
	for (i = 0; i < s1.length(); i++)
	{
		if(s1[i] != s2[i])
		{
			pi = i;
			break;
		}
	}
	i++;
	for (; i < s1.length(); i++)
	{
		if(s1[i] != s2[i])
		{
			if(s1[pi] == s2[i] and s1[i] == s2[pi])
			{
				flag=1;
			}
			break;
		}
	}
	i++;
	for(;i<s1.length();i++)
	{
		if(s1[i] != s2[i])
			flag=0;
	}
	if(flag==1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}