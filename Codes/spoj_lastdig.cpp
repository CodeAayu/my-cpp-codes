#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a , b , n;
	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		if(b==0)
		{
			cout << 1 << endl;
		}
		else
		{
			a=a%10;
			if(a==0 or a==1 or a==5 or a==6)
				cout << a << endl;
			else if(a==2 or a==3 or a==7 or a==8)
			{
				b=b%4;
				if(b==0)
					b=4;
				int tmp=a;
				for (int i = 1; i < b; i++)
				{
					tmp=tmp*a;
				}
				cout << tmp%10 << endl;
			}
			else
			{
				b=b%2;
				if(b==0)
					b=2;
				int tmp=a;
				for (int i = 1; i < b; i++)
				{
					tmp=tmp*a;
				}
				cout << tmp%10 << endl;
			}
		}
	}
	return 0;
}