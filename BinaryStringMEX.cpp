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
		
		int n = str.length();
		
		int next0[n], next1[n], pos0 = INT_MAX, pos1 = INT_MAX, dp[n], count = 0;
		
		for(int i=n-1;i>=0;i--)
		{
			next0[i] = pos0;
			next1[i] = pos1;
			
			if(str[i] == '0')
				pos0 = i;
			else
				pos1 = i;
		}
		
		if(pos0 == INT_MAX)
		{
			cout<<0<<"\n";
			continue;
		}
		
		if(pos1 == INT_MAX)
		{
			cout<<1<<"\n";
			continue;
		}
		
		bool one = false, zero = false;
		
		for(int i=n-1;i>=0;i--)
		{
			dp[i] = count;
			
			if(str[i] == '0')
				zero = true;
			else
				one = true;
				
			if(one && zero)
			{
				one = zero = false;
				count++;
			}
		}
		
		string res;
		
		int curr = pos1;
		
		while(1)
		{
			res.push_back(str[curr]);
			
			pos1 = next1[curr];
			pos0 = next0[curr];
			
			if(pos0 == INT_MAX){
				res.push_back('0');
				break;
			}
			
			if(pos1 == INT_MAX)
			{
				res.push_back('1');
				break;
			}
			
			if(dp[pos1] >= dp[pos0])
				curr = pos0;
			else
				curr = pos1;
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}
