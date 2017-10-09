#include <bits/stdc++.h>
using namespace std;
int A[26];

int main()
{
	vector <string> v ;
	string q;
	while(cin >> q)
		v.push_back(q);
	for (auto u:v)
	{
		for(auto c:u)
		{
			if(c <= 'z' and c>='a')
				A[c - 'a']=1;
		}
	}
	int t=0;
	for(auto o:A)
		t+=o;
	cout << t;
	return 0;
}