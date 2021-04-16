#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>arr[],int u,int v)
{
	arr[u].push_back(v);
	arr[v].push_back(u);
}
void DFS(vector<int>arr[],int u,int h,bool visit[],int ans[])
{
	visit[u]=true;
	for(auto a:arr[u])
	{
		if(visit[a]==false)
		DFS(arr,a,h+1,visit,ans);
	}
	if(h%2==0)
	ans[u]=2;
	else
	ans[u]=1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>arr[n+1];
		int ans[n+1];
		bool visit[n+1]={false};
		for(int i=0;i<n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			insert(arr,u,v);
		}
		DFS(arr,1,0,visit,ans);
		for(int i=1;i<=n;i++)
		cout<<ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
