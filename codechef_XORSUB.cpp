#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,n,k,i,j,p,c;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    //dp[n]=k;
	    set<int>arr;
	    set<int>::iterator itr;
	    int ans=k;
	    arr.insert(k);
	    for(i=0;i<n;i++)
	    {
	        for(itr=arr.begin();itr!=arr.end();itr++)
	        {
	            int x=a[i]^(*itr);
	            ans=max(ans,x);
	            arr.insert(x);
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
