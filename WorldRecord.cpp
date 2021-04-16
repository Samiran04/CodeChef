#include <bits/stdc++.h>
using namespace std;

double round(double val)
{
	int newVal = (val*100 + 0.5);
	return (double)(newVal)/100.0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double x1, x2, x3, v;
		cin>>x1>>x2>>x3>>v;
		
		double factor = x1*x2*x3*v;
		
		double speed = 100.0/factor;
		
		speed = round(speed);
		
		if(speed < 9.58)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	return 0;
}
