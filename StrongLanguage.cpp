#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		
		string str;
		cin>>str;
		
		int count = 0, res = 0;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == '*')
				count++;
			else
				count = 0;
			
			res = max(res, count);
		}
		
		if(res >= k)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	
	return 0;
}
