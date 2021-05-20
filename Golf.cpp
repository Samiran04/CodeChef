#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, x, k;
		cin>>n>>x>>k;
		
		int diff = (n+1-x);
		
		if(x%k == 0 || diff%k == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}
