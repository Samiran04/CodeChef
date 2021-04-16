#include <bits/stdc++.h>
using namespace std;

int index(int i,int n)
{
	return (i-1)%n+1;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		int q;
		scanf("%lld",&n);
		long long arr[n+1];
		for(long long i=1;i<=n;i++)
		scanf("%lld",&arr[i]);
		long long R,store[n+1],round=0,sum=0,M=1000000007;
		store[0]=0;
		for(long long i=1;i<=n;i++)
		{
			store[i]=(sum+arr[i])%M;
			if(index(i+1,n)!=n&&arr[index(i+1,n)]==1)
			{
				store[index(i+1,n)]=(sum+(arr[i]-(arr[i]%2))+1)%M;
				sum=(sum+(arr[i]-(arr[i]+1)%2))%M;
				i++;
				continue;
			}
			else if(i==n)
			{
				sum=(sum+(arr[i]-((arr[i]+1)%2)))%M;
			}
			else
			{
				sum=(sum+(arr[i]-(arr[i]%2)))%M;
			}
		}
		scanf("%d",&q);
		while(q--)
		{
			scanf("%lld",&R);
			if(arr[1]==1)
			{
				if(n==1)
				printf("%lld",R%M);
				else if(R==1)
				printf("1");
				else if(R%n==1)
				{
					printf("%lld",(R/n)%M);
				}
				else if(R%n==0)
				{
					printf("%lld",(R/n)%M);
				}
				else
				printf("%lld",((R/n)+1)%M);
			}
			else
			{
				if(R%n!=0)
				{
					printf("%lld",((sum*(R/n))%M+store[index(R,n)])%M);
				}
				else
				{
					printf("%lld",((sum*((R/n)-1))%M+store[index(R,n)])%M);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
