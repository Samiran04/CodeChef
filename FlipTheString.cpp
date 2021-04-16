#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int n=str1.length(),count=0,sum1=0,sum2=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==1)
			{
				if(str1[i]!=str2[i])
				{
					sum1++;
				}
				else
				{
					if(sum1!=0)
					count++;
					sum1=0;
				}
			}
			else
			{
				if(str1[i]!=str2[i])
				{
					sum2++;
				}
				else
				{
					if(sum2!=0)
					count++;
					sum2=0;
				}
			}
		}
		if(sum1!=0)
		count++;
		if(sum2!=0)
		count++;
		cout<<count<<"\n";
	}
	return 0;
}
