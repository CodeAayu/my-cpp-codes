#include <bits/stdc++.h>
using namespace std;

int main()
{
	int s , n , mn , p=0;
	cin >> s >> n;
    vector <int> a(n);
    vector <int> b(n);
    for (int i = 0; i < n; i++)
    {
    	cin >> a[i] >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
    	mn=a[0];
    	for (int j = 0; j < n; j++)
    	{
    		if(mn>=a[j])
    			{
    				mn=a[j];
    				p=j;
    			}
    	}
    	if(mn>=s)
    	{
    		cout << "NO";
    		return 0;
    	}
    	else
    		{
                s=s+b[p];
                a[p]=10002;
            }
    }
    cout << "YES";
    return 0;
}