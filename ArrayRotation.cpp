#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	long long arr[n], sum = 0, M = 1000000007;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum += arr[i];
		sum = (sum%M+M)%M;
	}
	
	int q;
	cin>>q;
	
	while(q--)
	{
		int x;
		cin>>x;
		sum += sum;
		sum = (sum%M+M)%M;
		cout<<sum<<"\n";
	}
	
	return 0;
}
