#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int a[MAX][2];
int main()
{
	int n;
	cin >> n;
	vector <int> aayu(n);
	for (int i = 0; i < n; i++)
	{
		cin >> aayu[i] ;
	}
    
    a[0][0] = 1;
    a[0][1] = 0;

    for (int i = 1; i < n; i++)
    {
    	a[i][1] = max(a[i-1][0],a[i-1][1]);
    	int t=0;
    	for (int j = 0; j < i; j++)
    	{
    		if(aayu[i]>aayu[j])
    			t = max(t,a[j][0]);
    	}
    	a[i][0] = t + 1;
    }
    cout << max(a[n-1][0],a[n-1][1]);
    return 0;

}