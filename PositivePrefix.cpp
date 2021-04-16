#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>n>>k;
		int arr[n+1],curr=0;
		for(int i=1;i<=n;i++){
			arr[i]=i;
		}
		if(n==k)
		{
			for(int i=1;i<=n;i++)
			cout<<i<<" ";
		}
		else if(k==3)
		{
		    for(int i=1;i<=n;i++)
		    {
		        if(i>=5||i==3)
		        arr[i]=-i;
		        cout<<arr[i]<<" ";
		    }
		}
		else if(k<=2)
		{
		    for(int i=1;i<=n;i++)
		    {
		        if(i>k)
		        arr[i]=-i;
		        cout<<arr[i]<<" ";
		    }
		}
		else
		{
			bool odd=true;
			if(k%2==0)
			odd=false;
			int curr=6;
			for(int i=4;i<=k;i++)
			{
				if(odd&&i%2==1)
				{
					arr[i]=-i;
					curr-=2*i;
				}
				else if((!odd)&&i%2==0)
				{
					arr[i]=-i;
					curr-=2*i;
				}
				curr+=i;
			}
			int index=4;
			//cout<<curr<<"\n";
			while(curr<=0)
			{
				if(arr[index]<0)
				{
					arr[index]=index;
					curr+=2*index;
				}
				index++;
			}
			for(int i=k+1;i<=n;i++)
			arr[i]=-i;
			for(int i=1;i<=n;i++)
		cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
