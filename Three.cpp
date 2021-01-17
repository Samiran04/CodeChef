#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length();
		int hash[26]={0},pairs=0,non=0,ans=0;
		for(int i=0;i<n;i++)
		{
			hash[str[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(hash[i]%2==1)
			{
				hash[i]--;
				non++;
			}
		}
		for(int i=0;i<26;i++)
		{
			if(non==0)
				break;
			if(hash[i]!=0)
			{
				int m=min(hash[i]/2,non);
				non-=m;
				hash[i]=hash[i]-2*m;
				ans+=m;
			}
		}
		if(non==0)
		{
			for(int i=0;i<26;i++)
			{
				if(hash[i]!=0)
				{
					int m=min(hash[i]/2,non);
					non-=m;
					hash[i]=hash[i]-2*m;
					ans+=m;
					ans+=hash[i]/3;
					non+=hash[i]%3;	
				}
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
