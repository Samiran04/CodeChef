#include <bits/stdc++.h>
using namespace std;

string word="abcdefghijklmnop";

char decode(string str)
{
	int s=1,e=16;
	for(int i=0;i<4;i++)
	{
		int diff=(e-(s-1))/2;
		if(str[i]=='0')
		{
			e=e-diff;
		}
		else
		{
			s=s+diff;
		}
	}
	return word[s-1];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string str,ans;
		cin>>n;
		cin>>str;
		for(int i=0;i<n;i+=4)
		{
			string res;
			for(int j=i;j<i+4;j++)
			{
				res.push_back(str[j]);
			}
			ans.push_back(decode(res));
		}
		cout<<ans<<"\n";
	}
	return 0;
}
