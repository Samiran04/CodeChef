#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		int res[n],curr=n;
		for(int i=0;i<n;i++){
			res[i]=-1;
			arr[i]--;
		}
		for(int i=0;i<n;i++)
		{
			if(i==arr[i])
			{
				res[i]=curr;
				curr--;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(res[i]==-1)
			res[i]=res[arr[i]];
			printf("%d ",res[i]);
		}
		printf("\n");
	}
	return 0;
}
