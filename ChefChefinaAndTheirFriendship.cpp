#include <bits/stdc++.h>
using namespace std;

int lps1[2][100001],lps2[2][100001];

void LPS1(string str,int n,int k)
{
	int l=0,i=1;
	while(i<n)
	{
		if(str[i]==str[l])
		{
			l++;
			lps1[k][i]=l;
			i++;
		}
		else
		{
			if(l!=0)
			{
				l=lps1[k][l-1];
			}
			else
			{
				lps1[k][i]=0;
				i++;
			}
		}
	}
}

void LPS2(string str,int n,int k)
{
	int l=0,i=1;
	while(i<n)
	{
		if(str[i]==str[l])
		{
			l++;
			if(2*l>i+1)
				l=lps1[k][l-1];
			lps2[k][i]=l;
			i++;
		}
		else
		{
			if(l!=0)
			{
				l=lps1[k][l-1];
			}
			else
			{
				lps2[k][i]=0;
				i++;
			}
		}
	}
}

int main()
{
	int t;
	cin>>t;
	memset(lps1,0,sizeof(lps1));
	memset(lps2,0,sizeof(lps2));
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length();
		LPS1(str,n,0);
		LPS2(str,n,0);
		reverse(str.begin(),str.end());
		LPS1(str,n,1);
		LPS2(str,n,1);
		int i=1,count=0;
		while(i<n-2)
		{
			if((2*lps2[0][i]==i+1)&&(2*lps2[1][n-i-2]==n-i-1))
				count++;
			i+=2;
		}
		cout<<count<<"\n";
	}
	return 0;
}
