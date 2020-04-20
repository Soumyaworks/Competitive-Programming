#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,i,j,k,p,c,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    sort(a,a+n,greater<int>());
	    c=0;
	    k=n;
	    if(n>=3)
	    {
	        i=0;
	        while(i<n)
	        {
	            if(k>=2)
	            c=c+a[i]+a[i+1];
	            else
	            c=c+a[i];
	            i=i+4;
	            k=k-4;
	            
	        }
	        cout<<c<<"\n";
	    }
	    else
	    {
	        for(i=0;i<n;i++)
	        c=c+a[i];
	        cout<<c<<"\n";
	    }
	    
	}
	return 0;
}
