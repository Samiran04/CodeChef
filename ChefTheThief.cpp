#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,x,y;
		cin>>x>>y>>k>>n;
		if(x>y)
		swap(x,y);
		if((y-x)%k==0&&((y-x)/k)%2==0)
		cout<<"Yes";
		else
		cout<<"No";
		cout<<"\n";
	}
	return 0;
}
