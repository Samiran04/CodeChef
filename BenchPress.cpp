#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, w, wr;
		cin>>n>>w>>wr;
		
		int arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		if(wr >= w)
		{
			cout<<"YES\n";
			continue;
		}
		
		w = w - wr;
		
		sort(arr, arr+n);
		
		int left = 0, right = 0, i = 0;
		
		bool flag = false;
		
		while(i<n)
		{
			if(left <= right)
				left += arr[i];
			else
				right += arr[i];
			
			if(left+right >= w && left == right)
			{
				cout<<"YES\n";
				flag = true;
				break;
			}
				
			i++;
		}
		
		if(!flag)
			cout<<"NO\n";
	}
	
	return 0;
}
