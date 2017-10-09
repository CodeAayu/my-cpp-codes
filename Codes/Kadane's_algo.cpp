#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , a , s=0 , ms=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
	 	cin >> a; 
        if((s+a)>=0)
        	s=s+a;
        ms = max(ms,s);
	}
    cout << ms;
    return 0;
}