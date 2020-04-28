#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;

bool sortinrev(const pair<int,int> &a,
               const pair<int,int> &b)
{
       return (a.first > b.first);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,n,i,j,k,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        unordered_map<ll,ll>mymap;
        k=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(i=0;i<n;i++)
        {
            mymap[a[i]]++;
            if(a[i]==a[i+1])
                i++;
        }
        vector<pair<ll,ll>>v;
        for(auto it:mymap)
        {
            //cout<<"it.fi="<<it.fi<<" it.se="<<it.se<<"\n";
            v.pb(mp(it.se,it.fi));
        }
        sort(v.begin(),v.end(),sortinrev);
        /*
        for(auto it:v)
        {
            cout<<"fi="<<it.fi<<" se="<<it.se<<"\n";
        }*/
        p=v[0].se;
        for(i=1;i<v.size();i++)
        {
            if(v[i].fi==v[i-1].fi)
            {
                if(v[i].se < p)
                p=v[i].se;
            }
            else
            break;
        }
        cout<<p<<"\n";
        v.clear();
        mymap.clear();
    }
    return 0;
}
