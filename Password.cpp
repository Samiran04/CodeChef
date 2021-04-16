#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length();
		if(n<10||(str[0]>='0'&&str[0]<='9')||(str[n-1]>='0'&&str[n-1]<='9'))
			cout<<"NO";
		else{
			bool check[4];
			check[0]=check[1]=check[2]=check[3]=false;
			for(int i=0;i<n;i++)
			{
				if(str[i]>='0'&&str[i]<='9')
					check[0]=true;
				else if(str[i]>='a'&&str[i]<='z')
					check[1]=true;
				else if(str[i]>='A'&&str[i]<='Z')
					check[2]=true;
				else
					check[3]=true;
			}
			if(check[0]&&check[1]&&check[2]&&check[3])
				cout<<"YES";
			else
				cout<<"NO";
		}
		cout<<"\n";
	}
	return 0;
}
