#include <bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int n;
	cin>>str>>n;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!='9'&&n>0)
		{
			n--;
			str[i]='9';
		}
	}
	cout<<str;
	return 0;
}
