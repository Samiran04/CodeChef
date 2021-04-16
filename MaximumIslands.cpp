#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string str[n];
		for(int i=0;i<n;i++)
			cin>>str[i];
		int count1=0,count2=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if((i+j)%2==0&&str[i][j]=='.')
					count1++;
				if((i+j)%2==1&&str[i][j]=='*')
					count1++;
			}
		}
		if((n*m)%2==0)
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if((i+j)%2==0&&str[i][j]=='*')
						count2++;
					if((i+j)%2==1&&str[i][j]=='.')
						count2++;
				}
			}
		}
		else
			count2=INT_MAX;
		cout<<min(count1,count2)<<"\n";
	}
	return 0;
}
