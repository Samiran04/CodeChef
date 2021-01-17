#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long x;
		cin>>x;
		if(x==1)
		cout<<"0 1";
		else if(((x-2)&(x-1))==0)
		cout<<0<<" "<<x;
		else
		cout<<1<<" "<<x-1;
		cout<<"\n";
	}
	return 0;
}
