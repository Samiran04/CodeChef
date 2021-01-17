#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,m;
	cin>>n>>m>>k;
	int arr[n][k+1];
	for(int i=0;i<n;i++)
	for(int j=0;j<=k;j++)
	cin>>arr[i][j];
	int count=0;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		for(int j=0;j<k;j++)
		sum+=arr[i][j];
		if(sum>=m&&arr[i][k]<=10)
		count++;
	}
	cout<<count;
	return 0;
 } 
