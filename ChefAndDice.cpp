#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m;
		cin>>n;
		m = n;
		int ans = 0;
		
		while(n > 8)
		{
			ans += 44;
			n = n - 4;
		}
		
		if(n == 8)
			ans += 104;
		
	 	else if(n == 7)
	 		ans += 99;
		
		else if(n == 6)
			ans += 88;
		
		else if(n == 5)
			ans += 76;
		
		else if(n == 4)
			ans += 60;
		
		else if(n == 3){
			ans += 51;
		}
		
		else if(n == 2)
			ans += 36;
		
		else if(n == 1)
			ans += 20;
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
