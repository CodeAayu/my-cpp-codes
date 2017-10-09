#include <bits/stdc++.h>
using namespace std;
int main()
{
	int in , test[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777} ; 
	cin >> in ;
    for (int u:test)
    {
    	if(in%u==0)
    	{
    		cout << "YES" ;
    		return 0;
    	}
    }
    cout << "NO" ;
	return 0;
}