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
		long long arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int odd=0,even=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%2==0)
				even++;
			else
				odd++;
		}
		if(odd%2==0&&even%2==0)
			cout<<1;
		else if(odd%2==0)
			cout<<1;
		else
			cout<<2;
		cout<<"\n";
	}
	return 0;
}
