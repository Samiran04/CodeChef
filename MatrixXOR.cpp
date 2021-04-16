#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m, k, ans = 0;
		cin>>n>>m>>k;
		
		if(n < m)
			swap(n, m);
			
		for(int i=1;i<=n;i++)
		{
			int times = min(i, m);
			
			if(times % 2 == 1){
				ans = (ans ^ (k+i+1));
			}
		}
		
		int rem = m - 1, val = k + n + 1 + 1;
		
		while(rem > 0)
		{
			if(rem % 2 == 1){
				ans = (ans ^ val);
			}
			rem--;
			val++;
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
