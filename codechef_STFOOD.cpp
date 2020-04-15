#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,i,j,k,p,c,n,s,v;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>s>>p>>v;
	        k=p/(s+1);
	        a[i]=v*k;
	    }
	    sort(a,a+n);
	    cout<<a[n-1]<<"\n";
	}
	return 0;
}
