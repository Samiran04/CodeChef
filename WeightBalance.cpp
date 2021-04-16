#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		int w1, w2, x1, x2, M;
		cin>>w1>>w2>>x1>>x2>>M;
		
		int h = w1 +  M * x2, l = w1 +  M * x1;
		
		cout<<(h >= w2 && l <= w2)<<"\n";
	}
	
	return 0;
}
