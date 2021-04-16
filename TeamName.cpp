#include <bits/stdc++.h>
using namespace std;

int count(vector<char>v1,vector<char>v2)
{
	int c=0;
	int hash[26]={0};
	for(int i=0;i<v1.size();i++)
	{
		hash[v1[i]-'a']=1;
	}
	for(int i=0;i<v2.size();i++)
	{
		if(hash[v2[i]-'a'])
			c++;
	}
	return c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string arr[n];
		map<string,vector<char> >mp;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			mp[arr[i].substr(1,arr[i].size()-1)].push_back(arr[i][0]);
		}
		int ans=0;
		for(auto m1:mp)
		{
			for(auto m2:mp)
			{
				if(m1.first==m2.first)
					continue;
				int common = count(m1.second,m2.second);
				ans=ans+(m1.second.size()-common)*(m2.second.size()-common);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
