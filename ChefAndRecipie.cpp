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
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int hash[10001]={0},occur[10001]={0},curr=arr[0],count=1;
		bool flag=true;
		for(int i=1;i<n;i++)
		{
			if(curr==arr[i])
				count++;
			else
			{
				if(hash[count]!=0||occur[curr]!=0)
				{
					flag=false;
					break;
				}
				occur[curr]=1;
				hash[count]=1;
				count=1;
				curr=arr[i];
			}
		}
		if(hash[count]!=0||occur[curr]!=0)
			flag=false;
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}
	return 0;
}
