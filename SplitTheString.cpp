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
		string str;
		cin>>str;
		bool found=false;
		for(int i=n-2;i>=0;i--)
		{
			if(str[i]==str[n-1])
			{
				found=true;
				break;
			}
		}
		if(found)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
