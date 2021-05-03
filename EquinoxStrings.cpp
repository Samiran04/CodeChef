#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, a, b;
		long long A = 0, B = 0;
		
		cin>>n>>a>>b;
		
		while(n--){
			string str;
			cin>>str;
		
			if(str[0] == 'E' || str[0] == 'Q' || str[0] == 'U' || str[0] == 'I' || str[0] == 'N' || str[0] == 'O' || str[0] == 'X')
				A += a;
			else
				B += b;
		}
		
		if(A > B)
			cout<<"SARTHAK";
		else if(A < B)
			cout<<"ANURADHA";
		else
			cout<<"DRAW";
		
		cout<<"\n";
	}
	
	return 0;
}
