#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , m;
	cin >> n >> m;
	vector <int> aayu(m);
	for (int i = 0; i < m; i++)
	{
	     cin >> aayu[i];
	}
	sort(aayu.begin(), aayu.end());
	int t = aayu[n-1] - aayu[0];
    for (int i = n-1; i < m; i++)
    {
    	if(t > aayu[i]-aayu[i-n+1])
    		t = aayu[i]-aayu[i-n+1];
    }
    cout << t;
    return 0;
}