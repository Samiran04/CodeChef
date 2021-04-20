#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, x;
		cin>>n>>x;
		
		int arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		sort(arr, arr+n);
		
		int count = 1;
		
		for(int i=1;i<n;i++)
		{
			if(arr[i] != arr[i-1])
				count++;
		}
	
		cout<<min(count, n-x)<<"\n";
	}
	
	return 0;
}
