#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, m, x, y;
		cin>>n>>m;
		
		cin>>x>>y;
		
		string arr[n];
		
		for(int i=0;i<n;i++)
			cin>>arr[i];
			
		string res;
		
		for(int i=0;i<n;i++)
		{
			int pass = 0, par = 0;
			
			for(int j=0;j<m;j++)
			{
				if(arr[i][j] == 'F')
					pass++;
				else if(arr[i][j] == 'P')
					par++;
			}
			
			if(pass >= x || (pass >= x-1 && par >= y))
				res.push_back('1');
			else
				res.push_back('0');
		}
		
		cout<<res<<"\n";
	}
	
	return 0;
}
