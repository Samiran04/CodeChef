#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		int first=l+l,last=r+r;
		int count=1+last-first;
		cout<<count<<"\n";
	}
	return 0;
}
