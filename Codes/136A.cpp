#include <bits/stdc++.h>
using namespace std;
int main()
{
	int in ;
	cin >> in ;
	
	vector <int> aayu(in);
	for (int i = 0; i < in; ++i)
	{
		cin >> aayu[i];
	}

    vector <int> op(in+1);

    for (int i = 1; i < in+1; i++)
    {
    	for (int j = 0; j < in; j++)
    	{
    		if(i==aayu[j])
    			op[i]=j+1;
    	}
    }
    
    for (int i = 1; i < in+1; i++)
    {
    	cout << op[i] << " " ;
    }
	return 0;
}