#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x,y,curr;
	    cin>>n>>k>>x>>y;
	    curr=x;
	    if(y==x)
	    cout<<"YES\n";
	    else
	    {
	        int flag=0;
	        while(1){
	        curr=(curr+k)%n;
	        if(curr==y)
	        {
	            cout<<"YES\n";
	            flag=1;
	            break;
	        }
	        if(curr==x)
	        break;
	        }
	        if(flag==0)
	    cout<<"NO\n";
	    }
	}
	return 0;
}
