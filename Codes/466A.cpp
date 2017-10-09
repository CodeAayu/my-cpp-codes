#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,a,b,t;
	cin >> n >> m >> a >> b;
	if(b > a * m){
        cout << n * a;
    }
    else{
        int cnt = n / m;
        cout << cnt * b + min((n - m * cnt) * a, b);
    }
	return 0;
}


