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
		double count=0;
		for(int i=0;i<n;i++)
		{
			if(str[i]=='1')
				count++;
		}
		double val=(count+(120-n))*100.00/120.00;
		//cout<<val<<"\n";
		if(val>=75.00)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
