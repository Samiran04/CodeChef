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
		int fi[n],p[n],hash[m+1];
		for(int i=0;i<=m;i++)
			hash[i]=-1;
		for(int i=0;i<n;i++)
			cin>>fi[i];
		for(int i=0;i<n;i++)
			cin>>p[i];
		for(int i=0;i<n;i++)
		{
			if(hash[fi[i]]==-1)
				hash[fi[i]]=0;
			hash[fi[i]]+=p[i];
		}
		int cost=INT_MAX;
		for(int i=1;i<=m;i++)
		{
			if(hash[i]==-1)
				continue;
			if(cost>hash[i])
			{
				cost=hash[i];
			}
		}
		cout<<cost<<"\n";
	}
	return 0;
}
