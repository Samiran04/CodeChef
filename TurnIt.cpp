#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double u, v, a, s;
		cin>>u>>v>>a>>s;
		
		double div = u*u - 2*(a)*s;
		
		double ans = sqrt(div);
		
		if(v >= ans || div <= 0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
