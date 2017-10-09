#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n , m=0 ;
	cin >> n;

	vector <vector <int>> aayu;

	for (int i = 0; i < n; i++)
	{
		vector <int> tmp(3);
		aayu.push_back(tmp);
	}

	for (int i = 0; i < n; i++)
	{
		for(int j=0; j < 3; j++)
			cin >> aayu[i][j];
	}

	for (int i = 0; i < n; i++)
	{
		m=m+aayu[i][0];
	}
	if(m==0)
	{
		for (int i = 0; i < n; i++)
	    {
		    m=m+aayu[i][1];
	    }
	    if(m==0)
	    	{
		        for (int i = 0; i < n; i++)
	            {
		            m=m+aayu[i][1];
	            }
	            if(m==0)
	            {
	            	for (int i = 0; i < n; i++)
	            	{
	            		m=m+aayu[i][2];
	            	}
	            	if(m==0)
	            		cout << "YES" ;
	            }
	            else
	                cout << "NO" ;
	        }
        else
    	    cout << "NO" ;
	}
    else
    	cout << "NO" ;
    return 0;
}