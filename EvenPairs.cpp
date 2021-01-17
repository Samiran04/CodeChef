#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,ans=0;
		cin>>a>>b;
		long long odd=(a-a/2)*(b-b/2),even=(a/2)*(b/2);
		cout<<odd+even<<"\n";
	}
	return 0;
}
