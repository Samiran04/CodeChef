#include <bits/stdc++.h>
using namespace std;

bool check(string str)
{
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]!='4')
        return false;
    }
    return true;
}
int main()
{
	string str;
	cin>>str;
	int n=str.length();
	if(str=="4")
	cout<<1;
	else if(str=="7")
	cout<<2;
	else
	{
		long long pos=0;
		for(int i=1;i<n;i++)
			pos+=pow(2,i);
		long long p=1;
		//cout<<pos<<"\n";
		int c=0;
		for(int i=n-1;i>=0;i--)
		{
			if(str[i]=='7')
			p+=pow(2,c);
			c++;
		}
		cout<<p+pos;
	}
	return 0;
}
