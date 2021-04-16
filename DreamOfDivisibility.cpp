#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		while(k%2==0)
			k/=2;
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			if(arr[i]%k!=0)
			{
				cout<<"NO\n";
				flag=false;
				break;
			}
		}
		if(flag)
			cout<<"YES\n";
	}
	return 0;
}
