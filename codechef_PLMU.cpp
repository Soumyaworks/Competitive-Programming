#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j,k,c,n,c1,c2;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll a[n];
	    c=0;c1=0;c2=0;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]==0)
	            c1++;
	        if(a[i]==2)
	            c2++;
	    }
	    c=(c1*(c1-1)/2 + c2*(c2-1)/2);
	    cout<<c<<"\n";

	}
	return 0;
}
