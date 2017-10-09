#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s1="hello" ,s2;
	cin >> s2;
    int i=0 , j=0 ;
    while(j<s2.length())
    {
        if(s1[i]==s2[j])
        	{
                if(i==s1.length()-1)
                {
                	cout << "YES" ;
                	return 0;
                }
        		i++;
        	}
        j++;
    }
    cout << "NO" ;
	return 0;
}