#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long a, y, x, ans = 0;
		cin>>a>>y>>x;
		
		if(a >= y)
		{
			ans = x * y;
		}
		else
		{
			ans = x * a + 1;
		}
		
		cout<<ans<<"\n";
	}
	return 0;
}
