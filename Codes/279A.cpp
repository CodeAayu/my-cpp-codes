#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x , y , x1=0,y1=0,i=1 , cnt=0;
	cin >> x >> y;
	if(x==0 and y==0)
	{
		cout << 0 << endl;
		return 0;
	}
	while(true)
	{
		if(i%2==1)
		{
			for(int a=0; a < i ; a++)
			{
				x1++;
				if(x1==x and y1==y)
				{
					cout << cnt << endl;
					return 0;
				}
			}
			cnt++;
			for(int a=0; a < i ; a++)
			{
				y1++;
				if(x1==x and y1==y)
				{
					cout << cnt << endl;
					return 0;
				}
			}
			cnt++;
			i++;
		}
		if(i%2==0)
		{
			for(int a=0; a < i ; a++)
			{
				x1--;
				if(x1==x and y1==y)
				{
					cout << cnt << endl;
					return 0;
				}
			}
			cnt++;
			for(int a=0; a < i ; a++)
			{
				y1--;
				if(x1==x and y1==y)
				{
					cout << cnt << endl;
					return 0;
				}
			}
			cnt++;
			i++;
		}
	}
	return 0;
}