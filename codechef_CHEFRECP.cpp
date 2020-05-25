#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define mp make_pair
#define se second
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j,k,p,c,n;
	cin>>t;
	while(t--)
	{
	    vector<ll>v;
	    unordered_map<ll,ll>mymap;
	    set<ll>S;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>k;
	        v.pb(k);
	        mymap[k]++;
	    }
	    ll f=0;
	    for(i=1;i<n;i++)
	    {
	        if(v[i]!=v[i-1])
	        {
	            if(find(v.begin()+i,v.end(),v[i-1])!=v.end())
	            {
	                f=1;
	                break;
	            }
	        }
	    }
	    if(f==1)
	    cout<<"NO"<<"\n";
	    else
	    {
	        c=0;
	        for(auto it:mymap)
	        {
	            S.insert(it.se);
	            c++;
	        }
	        if(S.size()==c)
	        cout<<"YES"<<"\n";
	        else
	        cout<<"NO"<<"\n";
	    }
	    mymap.clear();
	    v.clear();
	    S.clear();
	}
	return 0;
}
