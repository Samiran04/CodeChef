#include <iostream>
using namespace std;

int getSum(int n)
{
    return (n+1)*n/2;
}

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long n;
	    cin>>n;
	    
	    int ans = 1, pre = 1;
	    long long sum = 1;
	    
	    while(sum <= n)
	    {
	        pre = ans;
	        ans++;
	        sum = getSum(ans);
	    }
	    
	    cout<<pre<<"\n";
	}
	return 0;
}

