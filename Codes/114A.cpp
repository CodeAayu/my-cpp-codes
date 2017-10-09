#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long k , l;
	cin >> k >> l;
	long long i;
	if(l<k)
    {
    	cout << "NO" << endl;
		return 0;
    }
	for (i = 0; (l/k)>0; i++)
	{
		if(l%k > 0)
		{
			cout << "NO" << endl;
			return 0;
	    }
	    if(l/k == 1) 
	    	break;
	    l = l/k;
    }
    if(l==k)
    	cout << "YES" << endl << i << endl;
    else 
    	cout << "NO" << endl;
    return 0;
}