#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int H, x, y, C;
		cin>>H>>x>>y>>C;
		
		if(C >= ((y/2)+x)*H)
			cout<<"YES";
		else
			cout<<"NO";
			
		cout<<"\n";
	}
	
	return 0;
}
