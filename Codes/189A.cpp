#include <bits/stdc++.h>
using namespace std;

int cut[4000];

int Cut(int n , int a , int b, int c)
{
	if(n<0)
	    return -100000;
	if(cut[n]!=0)
		return cut[n];
	if(n==0)
		return 0;
	return cut[n] =1 + max(Cut(n-a,a,b,c),max(Cut(n-b,a,b,c),Cut(n-c,a,b,c))) ;

}

int main()
{
	int n , a[3];
	cin >> n >> a[0] >> a[1] >> a[2];
	sort(a,a+3);
	int m=Cut(n,a[0],a[1],a[2]) ;
	cout << m;
	return 0;
}
