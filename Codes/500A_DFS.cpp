#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ,m, t=1 , tmp , aayu=0;
	cin >> n >> m;
    for (int i = 0; i < n-1; i++)
    {
    	cin >> aayu;
    	t = t + aayu;
    	i = t-2;
    	for(int k=1; k<aayu;k++)
    		cin >> tmp;
    	if (t>m)
    	{
    		cout << "NO" ;
    		return 0;
    	}
    	if (t==m)
    	{
    		cout << "YES" ;
    		return 0;
    	}
    	
    }
}