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
    if(a<aayu[0])
    {
    	cout << "-1" ;
    	return 0;
    }

    while(i<=j)
    {
    	if(aayu[(i+j)/2]<a)
    		i=(i+j)/2 + 1;

    	else if(aayu[(i+j)/2]>a)
    		j=(i+j)/2 - 1;

    	else
    	{
    		cout << aayu[(i+j)/2] ;
    		return 0;
    	}
    }
    
    cout << aayu[j] ;
	return 0;
}