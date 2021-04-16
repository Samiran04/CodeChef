#include <bits/stdc++.h>
using namespace std;

const int N=501;
int arr[N][N],n,m;

void check(vector<pair<long long,int> >&sum)
{
		for(int i=m-1;i>=0;i--)
		{
			int j=0,k=i;
			int count=0;
			long long s=0;
			while(j<n&&k<m)
			{
				count++;
				s+=arr[j][k];
				j++;
				k++;
			}
			sum.push_back(make_pair(s,count));
		}
	for(int i=1;i<n;i++)
	{
		int j=0,k=i,count=0;
		long long s=0;
		while(j<m&&k<n)
		{
			count++;
			s+=arr[k][j];
			j++;
			k++;
		}
		sum.push_back(make_pair(s,count));
	}
}

int get(int x,int y,int m)
{
	int index,diff;
	if(y>=x)
	{
		diff=y-x+1;
		index=m-diff;
	}
	else
	{
		diff=x-y;
		index=m+diff;
		index--;
	}
	return index;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>arr[i][j];
		vector<pair<long long,int> >sum;
		check(sum);
		int q;
		cin>>q;
		while(q--)
		{
			int x,y,v,index;
			cin>>x>>y>>v;
			if(y>=x)
			{
				index=get(x,y,m);
				sum[index].first-=arr[x-1][y-1];
				sum[index].first+=v;
			}
			else
			{
				index=get(x,y,m);
				sum[index].first-=arr[x-1][y-1];
				sum[index].first+=v;
			}
			//int s=sum.size();
			arr[x-1][y-1]=v;
			bool flag=true;
			for(int i=m-1;i>=0;i--)
			{
				index=get(1,i+1,m);
				if(sum[index].first%arr[0][i]!=0||sum[index].first/arr[0][i]!=sum[index].second)
				{
					flag=false;
					break;
				}
			}
			if(flag==true)
			{
				for(int i=1;i<n;i++)
				{
					index=get(i+1,1,m);
					if(sum[index].first%arr[i][0]!=0||sum[index].first/arr[i][0]!=sum[index].second)
					{	
						flag=false;
						break;
					}
				}
			}
			if(flag)
				cout<<"Yes";
			else
				cout<<"No";
			cout<<"\n";
		}
	}
	return 0;
}
