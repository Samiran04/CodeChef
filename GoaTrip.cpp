#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long count=0;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(i*j>=n)
			break;
			else
			{
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}
