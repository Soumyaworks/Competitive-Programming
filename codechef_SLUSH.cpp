#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t,i,j,k,p,c,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    ll C[100001];
	    map<ll,ll>mymap;
	    for(i=1;i<=m;i++)
	    {
	        cin>>C[i];
	        //C[k]=k;
	        
	    }
	    c=0;
	    ll d,f,b;
	    vector<ll>v;
	    for(i=0;i<n;i++)
	    {
	        cin>>d>>f>>b;
	        if(C[d]!=0)
	        {
	            c=c+f;
	            //cout<<d<<"\n";
	            v.push_back(d);
	            C[d]--;
	        }
	        else
	        {
	            c=c+b;
	            p=0;
	            v.push_back(-1);
	            
	        }
	    }
	    cout<<c<<"\n";
	    vector<ll>v1,v2;
	    for(i=1;i<=m;i++)
	    {
	        if(C[i]!=0)
	        {
	            v1.push_back(C[i]);
	            v2.push_back(i);
	        }
	    }
	    k=0;
	    for(i=0;i<v.size();i++)
	    {
	        if(v[i]!=-1)
	        cout<<v[i]<<" ";
	        else
	        {
	            while(v1[k]==0)
	            k++;
	            
	            cout<<v2[k]<<" ";
	            v1[k]--;
	            k=0;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
