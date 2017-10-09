#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <int> tl(n);
	int c1=0 , c2=0 , c3=0;
	for (int i = 0; i < n; i++)
	{
		cin >> tl[i];
		if(tl[i]==1)
			c1++;
		if(tl[i]==2)
			c2++;
		if(tl[i]==3)
			c3++;
	}
	int m = min(c1,min(c2,c3));
    cout << m << endl;
    for(int i=0; i < m ; i++)
    {
    	for(int j=0; j < n; j++)
    	{
    		if(tl[j]==1)
    		{
    			cout << j+1 << " ";
    			tl[j]=0;
    			break;
    		}
    	}
    	for(int j=0; j < n; j++)
    	{
    		if(tl[j]==2)
    		{
    			cout << j+1 << " ";
    			tl[j]=0;
    			break;
    		}
    	}
    	for(int j=0; j < n; j++)
    	{
    		if(tl[j]==3)
    		{
    			cout << j+1 << endl;
    			tl[j]=0;
    			break;
    		}
    	}
    }
    return 0;
} 	
