#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long c;
		cin>>c;
		
		string str;
		
		for(int i=0;i<=32;i++)
		{
			if(pow(2,i)>c)
				break;
			if((c>>i)&1 == 1)
				str.push_back('1');
			else
				str.push_back('0');
		}
		
		long long a = 0, b = 0;
		bool flag = false;
		
		//cout<<str<<"\n";
		
		for(int i=str.length()-1;i>=0;i--)
		{
			if(str[i] == '0')
			{
				a += pow(2,i);
				b += pow(2,i);
			}
			else
			{
				if(a < b)
					a += pow(2,i);
				else
					b += pow(2,i);
			}
			
			//cout<<a<<" "<<b<<"\n";
		}
		
		cout<<a*b<<"\n";
	}
	return 0;
}
