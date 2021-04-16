#include <bits/stdc++.h>
using namespace std;

void insert(vector<int>arr[],int u,int v)
{
	arr[u].push_back(v);
}

int DFS(vector<int>arr[],int u,long long &s)
{
	if(arr[u].size()==0)
	{
		s=1;
		return 1;
	}
	vector<long long>store;
	int count=0;
	for(auto a:arr[u])
	{
		count+=DFS(arr,a,s);
		store.push_back(s);
	}
	long long m=0;
	for(auto a:store)
	{
		m=max(m,a);
	}
	s=m+count+1;
	return count+1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,u;
		cin>>n;
		vector<int>arr[n+1];
		for(int i=1;i<n;i++)
		{
			cin>>u;
			insert(arr,u,i+1);
		}
		long long s=0;
		DFS(arr,1,s);
		cout<<s<<"\n";
	}
	return 0;
}
