#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        long long arr[n],curr=0;
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int flag=0,i;
        for(i=0;i<n;i++)
        {
            curr=curr+(arr[i]-k);
            if(curr<0)
            {
                cout<<i+1<<"\n";
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            long long days=curr/k;
            days+=i+1;
            cout<<days<<"\n";
        }
    }
	return 0;
}
