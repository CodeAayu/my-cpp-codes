#include <bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	string s1 , s2 , tmp;
	cin >> s1;
	while(cin >> tmp)
	{
		s2=s1;
		s1=tmp;
	}
	if(s1.length()==1)
		c = tolower(s2[s2.length()-1]);
	else
		c = tolower(s1[s1.length()-2]);

	if(c=='a' or c=='e' or c=='i' or c=='o' or c=='u' or c=='y')
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}