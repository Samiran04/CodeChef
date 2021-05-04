#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		string str;
		
		cin>>n;
		cin>>str;
		
		int count = 0;
		bool flag = false;
		
		for(int i=0;i<n;i++)
		{
			if(str[i] == '1')
				count++;
			
			double percent = (double)(count)*(100.0)/(double)(i+1);
			
			//cout<<percent<<" ";
			
			if(percent >= 50.0)
			{
				flag = true;
				break;
			}
		}
		
		if(flag)
			cout<<"YES";
		else
			cout<<"NO";
		
		cout<<"\n";
	}
	
	return 0;
}
