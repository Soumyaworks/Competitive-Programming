#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main() {
	// your code goes here
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
	    c=0;
	    vector<ll>v;
	    ll p1,p2,p3,p4;
	    for(i=0;i<n;i++)
	    {
	        p1=i-1;
	        if(i==0)
	        p1=n-1;
	        p2=i+1;
	        if(i==n-1)
	        p2=0;
	        
	        /*
	        for(auto it:v)
	        cout<<it<<" ";
	        cout<<"\n";
	        */
	        ll sum=a[p1]+a[i]+a[p2];
	        if(sum>c)
	        c=sum;
	        //v.clear();
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
