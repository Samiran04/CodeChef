#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int first=-1,second=-1,diff=INT_MAX,n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		if(n==1)
		cout<<arr[0];
		else if(n==2)
		cout<<max(arr[0],arr[1]);
		else if(n==3)
		cout<<max(arr[0]+arr[1],arr[2]);
		else{
			int diff1=abs((arr[0]+arr[3])-(arr[1]+arr[2]));
			int diff2=abs((arr[0]+arr[1]+arr[2])-arr[3]);
			if(diff1<diff2)
			cout<<max(arr[0]+arr[3],arr[1]+arr[2]);
			else
			cout<<max(arr[0]+arr[1]+arr[2],arr[3]);
		}
		cout<<"\n";
	}
	return 0;
}
