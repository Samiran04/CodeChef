#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<vector<int> >arr(n);
		map<int,int>mp;
		for(int i=0;i<n;i++)
		{
			int m,val;
			cin>>m;
			for(int j=0;j<m;j++)
			{
				cin>>val;
				arr[i].push_back(val);
				mp[abs(val)]++;
			}
		}
		long long count=0;
		for(auto a:mp)
		{
			if(a.second>1)
				count++;
		}
		for(int i=0;i<n;i++)
		{
			vector<int>pos,neg;
			for(int j=0;j<arr[i].size();j++)
			{
				if(arr[i][j]<0)
					neg.push_back(arr[i][j]);
				else
					pos.push_back(arr[i][j]);
			}
			reverse(pos.begin(),pos.end());
			while(true)
			{
				int ant;
				if(pos.empty()&&neg.empty())
					break;
				if(pos.empty())
					ant=neg.back();
				else if(neg.empty())
					ant=pos.back();
				else
				{
				    if(abs(neg.back())<pos.back())
				        ant=neg.back();
				    else
				        ant=pos.back();
				}
				if(ant<0)
				{
					if(mp[abs(ant)]>1)
					{
						count+=neg.size()-1;
					}
					else
					{
						count+=pos.size();
					}
				}
				else
				{
					if(mp[abs(ant)]>1)
					{
						count+=pos.size()-1;
					}
					else
					{
						count+=neg.size();
					}
				}
				if(ant<0)
					neg.pop_back();
				else
					pos.pop_back();
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
