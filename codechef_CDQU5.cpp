#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
#pragma GCC optimize("Ofast")
#define ll int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000009
#define fill(a,x) memset(a,x,sizeof(a))
#define indexed_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
using namespace __gnu_pbds;

ll dp[1000005];
void precompute()
{
    ll i;
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(i=4;i<1000005;i++)
    {
        dp[i]=(dp[i-2]+dp[i-3])%mod;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,i,j,k,p,c,n,x;
    cin>>t;
    precompute();
    while(t--)
    {
        cin>>x;
        cout<<dp[x]%mod<<"\n";
    }
    return 0;
}
