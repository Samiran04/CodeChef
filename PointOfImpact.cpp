#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,x,y;
		cin>>n>>k>>x>>y;
		vector<pair<int,int> >store;
		if(x==y)
		{
			cout<<n<<" "<<n;
		}
		else{
		int i=0;
		while(i<4)
		{
			int diff;
			if(i==0)
			{
				if(x>y)
				{
					diff=n-x;
					x+=diff;
					y+=diff;
				}
				else
				{
					diff=n-y;
					x+=diff;
					y+=diff;
				}
			}
			else if(i==1)
			{
				if(x>y)
				{
					diff=n-y;
					x-=diff;
					y+=diff;
				}
				else
				{
					diff=n-x;
					x+=diff;
					y-=diff;
				}
			}
			else if(i==2)
			{
				if(x>y)
				{
					diff=y;
					y=0;
					x-=diff;
				}
				else
				{
					diff=x;
					x=0;
					y-=diff;
				}
			}
			else if(i==3)
			{
				if(x>y)
				{
					diff=x;
					y+=diff;
					x=0;
				}
				else
				{
					diff=y;
					y=0;
					x+=diff;
				}
			}
			store.push_back(make_pair(x,y));
			i++;
		}
		cout<<store[(k-1)%4].first<<" "<<store[(k-1)%4].second;
	}
	cout<<"\n";
	}
	return 0;
}
