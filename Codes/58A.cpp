#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1="hello" ,s2;
	cin >> s2;
	int i , l=s2.length();
	for(i=0 ; i<l ; i++)
	{
		if(s2[i]==s1[0])
			{
				i++;
				break;
			}
		if(i==l-1)
		{
			cout << "NO" ;
			return 0;
		}
	}
	for( ; i<l ; i++)
	{
		if(s2[i]==s1[1])
			{
				i++;
				break;
			}
		if(i==l-1)
		{
			cout << "NO" ;
			return 0;
		}
	}
	for( ; i<l ; i++)
	{
		if(s2[i]==s1[2])
			{
				i++;
				break;
			}
		if(i==l-1)
		{
			cout << "NO" ;
			return 0;
		}
	}
	for( ; i<l ; i++)
	{
		if(s2[i]==s1[3])
			{
				i++;
				break;
			}
		if(i==l-1)
		{
			cout << "NO" ;
			return 0;
		}
	}
	for( ; i<l ; i++)
	{
		if(s2[i]==s1[4])
			{
				i++;
				break;
			}
		if(i==l-1)
		{
			cout << "NO" ;
			return 0;
		}
	}
	cout << "YES" ;

	return 0;
}