#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		long long arr[n], sum = 0, flag = false;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum += arr[i];
			if(arr[i] == 2)
				flag = true;
		}
		
		if(sum % 2 == 0)
			cout<<0;
		else if(flag)
			cout<<1;
		else
			cout<<-1;
		
		cout<<"\n";
	}
	
	return 0;
}
