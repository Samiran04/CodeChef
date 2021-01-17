#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n+1];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		int dp[n+1][k+1];
		for(int i=0;i<=n;i++)
		for(int j=0;j<=k;j++)
			dp[i][j]=INT_MAX;
		for(int i=n-1;i>=0;i--)
		{
			for(int j=k;j>=0;j--)
			{
				if(arr[i]>=j)
				{
					dp[i][j]=arr[i];
					continue;
				}
				if(dp[i+1][j-arr[i]]==INT_MAX)
					dp[i][j]=INT_MAX;
				else
					dp[i][j]=min(dp[i+1][j],dp[i+1][j-arr[i]]+arr[i]);
			}
		}
		int sum[n];
		sum[n-1]=arr[n-1];
		for(int i=n-2;i>=0;i--)
		{
			sum[i]=sum[i+1]+arr[i];
		}
		bool flag=false;
		/*cout<<"HERE:\n";
		for(int i=0;i<n;i++)
			cout<<sum[i]<<" ";
		cout<<"\n";*/
		for(int i=n-1;i>=0;i--)
		{
			if(sum[i]-dp[i][k]>=k)
			{
				cout<<n-i;
				flag=true;
				break;
			}
		}
		if(flag==false)
			cout<<-1;
		cout<<"\n";
	}
	return 0;
}
