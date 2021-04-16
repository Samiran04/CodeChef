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
		string str;
		cin>>str;
		int count1=0,count0=0,ans=0;
		bool dis=false;	
		for(int i=0;i<n;i++)
		{
			if(str[i]=='1')
				count1++;
			else if(str[i]=='0'&&count1!=0)
			{
				count0++;
				dis=true;
			}
			if(dis&&count0>=count1)
			{
				ans+=count1;
				count1=0;
				count0=0;
				dis=false;
			}
		}
		cout<<ans+(count0)<<"\n";
	}
	return 0;
}
