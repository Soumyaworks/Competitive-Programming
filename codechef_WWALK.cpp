#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define fill(a,x) memset(a,x,sizeof(a))
#define indexed_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
using namespace __gnu_pbds;

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
        vector<pair<int,int>>v;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n;i++)
        cin>>b[i];
        ll d1[n+1],d2[n+1];
        d1[0]=0;
        d2[0]=0;
        for(i=1;i<=n;i++)
        {
            d1[i]=a[i-1]+d1[i-1];
            d2[i]=b[i-1]+d2[i-1];
        }
        c=0;
        /*
        for(i=0;i<=n;i++)
        {
            cout<<d1[i]<<" "<<d2[i]<<"\n";
        }
        */
        for(i=0;i<n;i++)
        {
            if(d1[i]==d2[i] && d1[i+1]==d2[i+1])
            c+=d1[i+1]-d1[i];
        }
        cout<<c<<"\n";
        
    }
    return 0;
}
