#include <bits/stdc++.h>
using namespace std;

long long tup(long long a,long long b,long long c)
{
	return abs(a-b)+abs(b-c)+abs(c-a);
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long arr[n];
		long long small=2000000000;
		long long large=-2000000000;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			small=min(small,arr[i]);
			large=max(large,arr[i]);
		}
		long long ans=-20000000000;
		for(int i=0;i<n;i++)
		{
			ans=max(ans,tup(small,arr[i],large));
		}
		cout<<ans<<"\n";
	}
	return 0;
}
