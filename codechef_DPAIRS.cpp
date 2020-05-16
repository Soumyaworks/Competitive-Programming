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
    ll n,m,i,j,k,p,c;
    cin>>n>>m;
    //ll a[n],b[m];
    vector<pair<ll,ll>>a(n),b(m);
    for(i=0;i<n;i++)
    {
        cin>>k;
        a[i].fi=k;
        a[i].se=i;
    }
    for(i=0;i<m;i++)
    {
        cin>>k;
        b[i].fi=k;
        b[i].se=i;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(i=0;i<m;i++)
    {
        cout<<a[0].se<<" "<<b[i].se<<"\n";
    }
    for(i=n-1;i>0;i--)
    {
        cout<<a[i].se<<" "<<b[m-1].se<<"\n";
    }
    
    return 0;
}
