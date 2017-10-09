#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n ;
	cin >> n;
    vector <int> aayu(n);
    vector <int> m(n);
    vector <int> k(n);
    cin >> aayu[0];
    m[0] = 1;
    k[0] = 1;
    for (int i = 1; i < n; i++)
    {
    	cin >> aayu[i];
    	if(aayu[i] >= aayu[i-1])
    		m[i] = m[i-1] + 1;
    	else
    		m[i] = 1;
    	if(m[i]>k[i-1])
    		k[i]=m[i];
    	else
    		k[i]=k[i-1];
    }
    cout << k[n-1];
    return 0;
}