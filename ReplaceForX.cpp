#include <bits/stdc++.h>
using namespace std;
int find(long long arr[],int n,long long val,bool b)
{
	int pos=-1;
	for(int i=0;i<n;i++)
	{
	    if(b&&arr[i]==val)
	    {
	        pos=i;
	        break;
	    }
		if(arr[i]==val)
		pos=i;
		else if(arr[i]>val)
		break;
	}
	return pos;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,k;
		long long x;
		cin>>n>>x>>p>>k;
		long long arr[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		if(arr[p-1]==x)
		cout<<"0\n";
		else if(p<k&&arr[p-1]<x)
		cout<<"-1\n";
		else if(p>k&&arr[p-1]>x)
		cout<<"-1\n";
		else
		{
			int pos=-1;
			bool b=false;
			if(arr[p-1]<x)
			b=true;
			pos=find(arr,n,x,b);
			if(pos!=-1){
				pos++;
			    cout<<abs(pos-p)<<"\n";
		    }
			else
			{
				arr[k-1]=x;
				sort(arr,arr+n);
				pos=find(arr,n,x,b);
				pos++;
				cout<<abs(pos-p)+1<<"\n";
			}
		}
	}
	return 0;
}
