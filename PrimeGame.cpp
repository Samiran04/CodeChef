#include <bits/stdc++.h>
using namespace std;

void prime(int count[])
{
	bool dp[1000001];
	memset(dp,true,sizeof(dp));
	for(int i=2;i*i<=1000000;i++)
	{
		if(dp[i])
		{
			for(int j=i*i;j<=1000000;j=j+i)
				dp[j]=false;
		}
	}
	count[2]=1;
	for(int i=3;i<1000001;i++)
	{
		if(dp[i])
			count[i]++;
		count[i]=count[i]+count[i-1];
	}
}

int main()
{
	int count[1000001]={0};
	prime(count);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long x,y,res=1;
		scanf("%d%d",&x,&y);
		if(count[x]<=y)
			printf("Chef");
		else
			printf("Divyam");
		printf("\n");
	}
	return 0;
}
