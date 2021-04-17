#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		if(n%2==1)
		{
			cout<<n/2;
		}
		else
		{
			bool flag=false;
			for(int i=0;i<=18;i++)
			{
				if(pow(2,i)==n)
				{
					flag=true;
					break;
				}
				else if(pow(2,i)>n)
				break;
			}
			if(flag)
			cout<<0;
			else
			{
				int count=0;
				long long val=n;
				while((n&1)!=1)
				{
					count++;
					n=(n>>1);
				}
				count++;
				count=pow(2,count);
				long long num=pow(2,count);
				cout<<val/count;
			}
		}
		cout<<"\n";
	}
	return 0;
}
