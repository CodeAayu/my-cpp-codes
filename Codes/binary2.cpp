#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin >> n ;
	vector <int> aayu(n);
	for (int i = 0; i < n; i++)
	{
		cin >> aayu[i];
	}

    int i = 0 , j = n-1 ;
    if (aayu[i]<aayu[j])
    {
    	cout << i+1 ;
    	return 0;
    }
    while(i<=j)
    {
        int mid = (i+j)/2 , ti = i , tj = j ;
    	if(aayu[mid]<aayu[i])
    		j = mid;
    	else if(aayu[mid]>aayu[j])
    		i = mid;
    	if (ti==i and tj==j)
    	{
    		cout << j+1;
    		return 0;
    	}

    }

	return 0;
}
