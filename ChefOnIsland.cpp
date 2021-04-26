#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int x, y, xr, yr, d;
		
		cin>>x>>y>>xr>>yr>>d;
		
		int supplyY = d * yr;
		int supplyX = d * xr;
		
		if(supplyX >= x && supplyY >= y)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	
	return 0;
}
