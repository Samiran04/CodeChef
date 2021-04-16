#include <bits/stdc++.h>
using namespace std;

struct cell{
	int wt,pos,jmp;
};

bool my_sort(cell c1,cell c2)
{
	return c1.wt<c2.wt;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cell arr[n];
		int jmp[n],wt[n];
		for(int i=0;i<n;i++)
		{
			cin>>wt[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>jmp[i];
		}
		for(int i=0;i<n;i++)
		{
			arr[i].pos=i+1;
			arr[i].wt=wt[i];
			arr[i].jmp=jmp[i];
		}
		sort(arr,arr+n,my_sort);
		int jumps=0;
		for(int i=1;i<n;i++)
		{
			if(arr[i-1].pos>=arr[i].pos){
				int j;
				j=((arr[i-1].pos-arr[i].pos)/arr[i].jmp)+1;
				arr[i].pos=arr[i].pos+(arr[i].jmp*j);
				jumps+=j;
			}
		}
		cout<<jumps<<"\n";
	}
	return 0;
}
