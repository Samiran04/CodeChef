#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int g, p, x[10];
		
		cin>>g>>p;
		
		for(int i=0;i<=9;i++)
			cin>>x[i];
		
		int before = 0;
		
		g--;
		
		for(int i=9;i>g;i--)
			before += x[i];
			
		int after = before + x[g];
		
		cout<<(before/p+1)<<" "<<((after-1)/p+1)<<"\n";
		
	}
	
	return 0;
}
