#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n , a ;
	cin >> n >> a ;
	vector <int> aayu(n);
	for (int i = 0; i < n; i++)
	{
		cin >> aayu[i];
	}

    int i = 0 , j = n-1 ;

    while(i<=j)
    {
    	if(aayu[(i+j)/2]<a)
    		i=(i+j)/2 + 1;

    	else if(aayu[(i+j)/2]>a)
    		j=(i+j)/2 - 1;

    	else
    	{
    		cout << "Found" ;
    		return 0;
    	}
    }
    cout << "Not Found" ;
	return 0;
}