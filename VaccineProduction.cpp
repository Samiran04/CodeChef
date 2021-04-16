#include <bits/stdc++.h>
using namespace std;
int main()
{
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int days=0,count=0,curr=1;
	if(d1>d2)
	{
		int temp=d1;
		d1=d2;
		d2=temp;
		temp=v1;
		v1=v2;
		v2=temp;
	}
	while(count<p)
	{
		if(curr>=d1)
		{
			count+=v1;
		}
		if(curr>=d2)
		{
			count+=v2;
		}
		curr++;
		days++;
	}
	cout<<days;
	return 0;
}
