#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a , tmp , j=0 , flag=0;
	cin >> a;
	if(a > (-9))
	{
		while(1)
	    {
		    a++;
		    tmp=a;
		    j++;
		    for (int i = 0; tmp > 0 ; i++)
		    {
			    if(tmp%10 == 8)
			    {
				    flag++;
				    break;
			    }
			    tmp = tmp/10;
		    }
		    if(flag==1)
			    break;
	    }
	    cout << j << endl;
	    return 0;
	}
	a=abs(a);
	while(1)
    {
		a--;
	    tmp=a;
	    j++;
	    for (int i = 0; tmp > 0 ; i++)
	    {
		    if(tmp%10 == 8)
		    {
			    flag++;
			    break;
		    }
		    tmp = tmp/10;
	    }
	    if(flag==1)
		    break;
    }
    cout << j << endl;
    return 0;
}