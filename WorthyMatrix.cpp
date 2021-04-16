#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<long long>> arr, int n, int m, int k)
{
	int order = 1, minimum = min(n, m), count = 0;
	
	while(order <= minimum)
	{
		int i = order, j = m;
		
		while(i <= n)
		{
			long long sum = arr[i][m] - arr[i-order][m] - arr[i][m-order] + arr[i-order][m-order];
			
			if(sum/(order*order) < k)
				i++;
			
			else
			{
				int s = order, e = j;
				
				while(s<e)
				{
					int mid = (s+e)/2;
					
					long long sum = arr[i][mid] - arr[i-order][mid] - arr[i][mid-order] + arr[i-order][mid-order];
					
					if(sum/(order*order) >= k)
						e = mid;
					else
						s = mid+1;
				}
				
				j = s;
				
				count += m - s + 1;
				
				i++;
			}
		}
		
		order++;
	}
	
	return count;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m, k;
		cin>>n>>m>>k;
		
		vector<vector<long long>> arr(n+1, vector<long long>(m+1, 0));
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>arr[i][j];
			}
		}
		
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
				arr[i][j] = arr[i][j] + arr[i][j-1];
		}
		
		for(int j=1;j<=m;j++)
		{
			for(int i=1;i<=n;i++)
				arr[i][j] = arr[i][j] + arr[i-1][j];
		}
		
		cout<<solve(arr, n, m, k)<<"\n";
	}
	
	return 0;
}
