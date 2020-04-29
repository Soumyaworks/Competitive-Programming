#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll n,i,j,k,p,c;
    cin>>n;
    unordered_map<ll,ll>mymap1,mymap2;
    ll b,d;
    ll s=LLONG_MAX;
    ll f=LLONG_MIN;
    ll c1=0;
    for(i=0;i<n;i++)
    {
        cin>>b>>d;
        mymap1[b]++;
        mymap2[d]++;
        if(b<s)
        s=b;
        if(d>f)
        f=d;
        c1+=(d-b+1)%mod;
        c1=c1%mod;
    }
    //cout<<"s="<<s<<"f="<<f<<"\n";
    vector<ll>v;
    p=0;c=0;
    for(i=s;i<=f;i++)
    {
       
        
        if(mymap1[i]>0)
        p=(p+mymap1[i]);
        //c=(c+p)%mod;
        //v.pb(p);
        c=c+p;
        if(mymap2[i]==1)
        p=(p-mymap2[i]);
        //cout<<p<<" ";
        
    }
    //v.pb(p);
    /*
    for(auto it:v)
    {
        //cout<<it<<" ";
        c=(c+it)%mod;
    }*/
    //p=(p-1)%mod;
    //c=(c+p)%mod;
    //cout<<p<<"\n";
    cout<<c1%mod<<"\n";
    return 0;
}
