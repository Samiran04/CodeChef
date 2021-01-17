#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,d;
		cin>>n>>k>>d;
		int arr[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		cout<<min(d,sum/k)<<"\n";
	}
	return 0;
}
