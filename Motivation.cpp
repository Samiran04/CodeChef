#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		
		int ans = 0;
		
		for(int i=0;i<n;i++)
		{
			int s, r;
			cin>>s>>r;
			
			if(s <= x && ans < r)
				ans = r;
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
