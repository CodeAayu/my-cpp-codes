#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n , m , t=0;
	cin >> n >> m;
	vector <long long> a(m);
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
	}
	t=a[0]-1;
    for (int i = 1; i < m; i++)
    {
    	if(a[i]-a[i-1] < 0)
    		t=t+a[i]-a[i-1]+n;
        else
        	t=t+a[i]-a[i-1];
    }
    cout << t;
    return 0;
}