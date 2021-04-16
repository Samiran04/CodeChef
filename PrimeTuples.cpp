#include <bits/stdc++.h>
using namespace std;

bool sieve[1000001];

void prime()
{
	memset(sieve,true,sizeof(sieve));
	for(int i=2;i*i<=1000000;i++)
	{
		if(sieve[i])
		{
			for(int j=i*i;j<=1000000;j+=i)
				sieve[j]=false;
		}
	}
}

int main()
{
	int dp[1000001]={0},count=0;
	prime();
	for(int i=5;i<=1000000;i++)
	{
		if(sieve[i]&&sieve[i-2])
			count++;
		dp[i]=count;
	}
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]<<"\n";
	}
	return 0;
}
