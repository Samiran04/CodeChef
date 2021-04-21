#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		long long r;
		cin>>n>>r;
		
		pair<int,int> arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i].first;
		
		for(int i=0;i<n;i++)
			cin>>arr[i].second;
			
		sort(arr, arr+n);
		
		long long curr = arr[0].second, res = curr;
		
		for(int i=1;i<n;i++)
		{
			long long time = arr[i].first - arr[i-1].first;
			long long dec = r * time, zero = 0;
			curr = max(curr-dec, zero);
			curr += arr[i].second;
			res = max(res, curr);
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}

