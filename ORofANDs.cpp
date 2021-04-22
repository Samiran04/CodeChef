#include <bits/stdc++.h>
using namespace std;

int getNum(int bits[])
{
	int ans = 0;
	
	for(int i=0;i<=31;i++)
	{
		if(bits[i] != 0)
			ans += pow(2, i);
	}
	
	return ans;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, q;
		cin>>n>>q;
		
		int arr[n], bits[32] = {0};
		
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			
			for(int j=0;j<=31;j++)
			{
				if((arr[i]>>j)&1 == 1)
					bits[j]++;
			}
		}
		
		cout<<getNum(bits)<<"\n";
		
		while(q--)
		{
			int x, v;
			cin>>x>>v;
			
			for(int j=0;j<=31;j++)
			{
				if((arr[x-1]>>j)&1 == 1)
					bits[j]--;
			}
			
			arr[x-1] = v;
			
			for(int j=0;j<=31;j++)
			{
				if((arr[x-1]>>j)&1 == 1)
					bits[j]++;
			}
			
			getNum(bits)<<"\n";
		}
	}
	
	return 0;
}
