#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a[201][2] , n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
	    for(int j=0;j<2;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	int count=0;

	for(int i=0;i<n;i++)
	{
	    int x=a[i][0] , y=a[i][1] , l=0 , r=0 , u=0 , b=0;
	    for(int j=0;j<n;j++)
	    {
	        if(x < a[j][0] and y == a[j][1])
	        {
	            r++;
	        }
	        else if(x > a[j][0] and y == a[j][1])
	        {
	            l++;
	        }
	        else if(x == a[j][0] and y < a[j][1])
	        {
	            u++;
	        }
	        else if(x == a[j][0] and y > a[j][1])
	        {
	            b++;
	        }
	        if(r>0 and l>0 and u>0 and b>0)
	        {
	            if(l+r+u+b >= 4)
	            {
	                count++;
	                break;
	            }
	        }
	    }
	}
	cout<<count;
	return 0;
}