#include <bits/stdc++.h>
using namespace std;

bool same(string str,int n)
{
	bool flag=true;
	for(int i=0;i<n-1;i++)
	{
		if(str[i]!=str[i+1])
			return false;
	}
	return true;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int count=0;
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='1')
			count++;
			else
			count--;
		}
		if(str.length()%2==1||same(str,str.length()))
		cout<<-1;
		else
		cout<<abs(count)/2;
		cout<<"\n";
	}
	return 0;
}
