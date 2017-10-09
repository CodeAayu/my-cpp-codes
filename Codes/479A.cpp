#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a1 , a2 , a3 ;
	cin >> a1 >> a2 >> a3;
    int mx=0;
    int a[]={a1+a2+a3 , a1*a2*a3 , a1+a2*a3 , (a1+a2)*a3 , a1*a2+a3 , a1*(a2+a3)} ;
    for (int i = 0; i < 6; i++)
    {
    	mx=max(mx,a[i]);
    }
    cout << mx;
    return 0;
}