#include <bits/stdc++.h>
using namespace std;

int n , a[21] , ch , bi , ba;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if(i%3==0)
			ch=ch+a[i];
		else if(i%3==1)
			bi=bi+a[i];
		else
			ba=ba+a[i];
	}
	int mx=max(ch,max(bi,ba));
	if(mx==ch)
	{
		cout << "chest";
		return 0;
	}
	if(mx==bi)
	{
		cout << "biceps";
		return 0;
	}
	if(mx==ba)
	{
		cout << "back";
		return 0;
	}

}