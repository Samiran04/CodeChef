#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int arr[n+2],store[n+2];
		for(int i=0;i<=n+1;i++)
			store[i]=arr[i]=0;
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			store[l]++;
			store[r+1]--;
			arr[r+1]-=(r-l+1);
		}
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=store[i];
			arr[i]+=sum+arr[i-1];
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
