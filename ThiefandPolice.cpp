#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		
		int x, y, a, b;
		
		cin>>x>>y;
		cin>>a>>b;
		
		int police, thief;
		
		thief = n - x + m - y;
		
		if(n-a <= m-b)
		{
			int diff = n-a;
			police = diff + (m-b-diff);
		}
		else
		{
			int diff = m-b;
			police = diff + (n-a-diff);
		}
		
		if(police < thief)
			cout<<"NO";
		else
			cout<<"YES";
		
		cout<<"\n";
	}
	
	return 0;
}
