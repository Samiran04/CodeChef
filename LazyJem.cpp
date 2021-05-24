#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n, b, m, ans = 0;
		cin>>n>>b>>m;
		
		while(n>0)
		{
			ans += (n+1)/2*m;
			m = m*2;
			n = n - (n+1)/2;
			
			if(n != 0)
				ans += b;
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
