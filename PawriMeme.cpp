#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string str, temp = "party";
		cin>>str;
		
		int n = str.length(), j = 0;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == temp[j]){
				j++;
			}
			else{
				j = 0;
				if(str[i] == 'p')
				    j = 1;
			}
			
			if(j == 5)
			{
				str[i-2] = 'w';
				str[i-1] = 'r';
				str[i] = 'i';
				j = 0;
			}
		}
		
		cout<<str<<"\n";
	}
	
	return 0;
}
