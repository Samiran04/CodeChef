#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,h,x;
	cin>>n>>h>>x;
	
	int arr[n];
	
	bool flag = false;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i] + x >= h)
		{
			flag = true;
		}
	}
	
	if(flag)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}
