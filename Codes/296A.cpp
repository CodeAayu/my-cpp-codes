#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> a;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(),a.end());
	vector <int> t1(n);
	vector <int> t2(n);
	t1[0]=1;
	for (int i = 1; i < n; i++)
	{
		if(a[i]==a[i-1])
			t1[i]=t1[i-1]+1;
		else
			t1[i]=1;
		t2[i] = max(t1[i],t2[i-1]);
	}
	n=n+1;
	if(t2[n-2] > n/2)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	return 0;
}