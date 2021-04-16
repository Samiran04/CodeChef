#include <bits/stdc++.h>
using namespace std;

int position(long long num)
{
	int pos;
	for(int i=0;i<40;i++)
	{
		if(((num>>i)&1)==1)
		pos=i;
	}
	return pos;
}

bool search(long long val,int pos)
{
	if(((val>>pos)&1)==1)
	return true;
	return false;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		long long x;
		scanf("%d%lld",&n,&x);
		long long arr[n];
		for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);;
		int i=0;
		while(x>0&&i<n-1)
		{
			/*for(int j=0;j<n;j++)
		cout<<arr[j]<<" ";
		cout<<"\n";*/
			if(arr[i]==0)
			{
				i++;
				continue;
			}
			if(n>=3&&i==n-2&&(arr[i]&(arr[i]-1))==0&&x%2==0)
			{
			    arr[n-1]=(arr[n-1]^arr[n-2]);
			    arr[n-2]=0;
			    break;
			}
			int pos=position(arr[i]);
			long long val=pow(2,pos);
			arr[i]=(arr[i]^val);
			int j=i+1;
			for(;j<n;j++)
			{
				if(search(arr[j],pos)||j==n-1)
				{
					arr[j]=(arr[j]^val);
					break;
				}
			}
			x--;
			if(arr[i]==0)
			{
				i++;
			}
		}
		if(x%2==1)
		{
			long long val=pow(2,0);
			arr[n-2]=(arr[n-2]^val);
			arr[n-1]=(arr[n-1]^val);
		}
		for(int i=0;i<n;i++)
		printf("%lld ",arr[i]);
		cout<<"\n";
	}
	return 0;
}
