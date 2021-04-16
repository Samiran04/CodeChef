#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100001];
	   arr[0]=2;
	   arr[1]=3;
	   arr[2]=1;
	   for(int i=3;i<100001;i++)
	   arr[i]=i+1;
	   for(int i=3;i<100001;i++)
	   {
	       if((arr[i]&(arr[i-1]))==0)
	       swap(arr[i],arr[i+1]);
	   }
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n==1)
	        cout<<"1\n";
	    else if((n&(n-1))==0)
	    cout<<"-1\n";
	    else
	    {
	            for(int i=0;i<n;i++)
	            cout<<arr[i]<<" ";
	            cout<<"\n";
	    }
	}
	return 0;
}
