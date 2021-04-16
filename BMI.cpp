#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double w,h;
		cin>>w>>h;
		double ans = w/(h*h);
		
		if(ans<=18)
			cout<<1;
		else if(ans>=19&&ans<=24)
			cout<<2;
		else if(ans>=25&&ans<=29)
			cout<<3;
		else
			cout<<4;
		cout<<"\n";
	}
	return 0;
}
