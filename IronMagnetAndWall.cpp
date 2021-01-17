#include <bits/stdc++.h>
using namespace std;

int power(int i,int j,int s,int k)
{
	return (k+1)-abs(i-j)-s;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int pre[n];
		string str;
		cin>>str;
		bool magnet=false,iron=false;
		int curr=0,count=0;
		queue<int>q;
		for(int i=0;i<n;i++)
		{
			if(str[i]==':')
			curr++;
			else if(str[i]=='X')
			curr=0;
			pre[i]=curr;
		}
		for(int i=0;i<n;i++)
		{
			if(!q.empty())
			{
				while(!q.empty()&&(power(q.front(),i,pre[i]-pre[q.front()],k)<=0))
				q.pop();
				if(q.empty())
				{
					magnet=iron=false;
				}
			}
			if(str[i]=='M'&&iron==false){
				q.push(i);
				magnet=true;
			}
			else if(str[i]=='I'&&magnet==false)
			{
				q.push(i);
				iron=true;
			}
			else if(str[i]=='X')
			{
				while(!q.empty())
				q.pop();
				magnet=iron=false;
			}
			else if(magnet&&str[i]=='I')
			{
				q.pop();
				count++;
			}
			else if(iron&&str[i]=='M')
			{
				q.pop();
				count++;
			}
			if(q.empty())
			{
				magnet=iron=false;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}
