#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here-
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j,k,p,c,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    ll a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    //sort(a,a+n);
	    //cout<<a[0]*n<<"\n";
	    ll x=a[0];
	    for(i=1;i<n;i++)
	    {
	        x=__gcd(x,a[i]);
	    }
	    cout<<x*n<<"\n";
	}
	return 0;
}
