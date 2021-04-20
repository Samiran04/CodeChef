#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a,b,c,t,A,B,C;
		cin>>a>>b>>c>>t>>A>>B>>C;
		
		if(A < a || B < b || C < c || A + B + C < t)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES";
		}
		cout<<"\n";
	}
	
	return 0;
}
