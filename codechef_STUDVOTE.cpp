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
	    cin>>n>>k;
	    int a[n],freq[101]={0};
	    vector<int>v;
	    int dis[n]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>j;
	        a[i]=j-1;
	        if(i==a[i])
	        dis[a[i]]=1;
	        else
	        freq[a[i]]++;
	    }
	    c=0;
	    for(i=0;i<100;i++)
	    {
	        if(freq[i]>=k && dis[i]==0)
	        c++;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
