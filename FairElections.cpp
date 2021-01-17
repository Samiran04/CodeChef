#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,john=0,jack=0;
		cin>>n>>m;
		int arr[n],brr[m];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			john+=arr[i];
		}
		for(int j=0;j<m;j++)
		{
			cin>>brr[j];
			jack+=brr[j];
		}
		int l=0;
		sort(arr,arr+n);
		sort(brr,brr+m,greater<int>());
		while(john<=jack&&l<n&&l<m)
		{
			if(arr[l]<brr[l])
			{
				john-=arr[l];
				john+=brr[l];
				jack-=brr[l];
				jack+=arr[l];
			}
			else
				break;
			l++;
		}
		if(john>jack)
			cout<<l;
		else
			cout<<-1;
		cout<<"\n";
	}
	return 0;
}
