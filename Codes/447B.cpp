#include <bits/stdc++.h>
using namespace std;

long long int v[26];

int main()
{
	string s;
	cin >> s;
	long long int k , mx=-1216532 , n=s.length() , ans=0;
	cin >> k;
	for (int i = 0; i < 26; i++)
	{
		cin >> v[i];
		mx = max(mx,v[i]);
	}
	for (int i = 0; i < n; i++)
	{
		ans = ans + (i+1)*v[s[i] - 'a'];
	}
	ans = ans + mx * ((((n + k)*(n + k + 1))/2) - ((n*(n + 1))/2));
	cout << ans << endl;
	return 0;
}