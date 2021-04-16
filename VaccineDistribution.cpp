#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d;
		cin>>n>>d;
		int arr[n],risk=0,fine=0,ans=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]>=80||arr[i]<=9)
			risk++;
			else
			fine++;
		}
		while(fine>0)
		{
			fine=fine-d;
			ans++;
		}
		while(risk>0)
		{
			risk=risk-d;
			ans++;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
