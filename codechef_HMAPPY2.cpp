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
    ll t,a,b,n,k,i,j,c,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>k;
        p=(a*b)/(__gcd(a,b));
        c=(n/a)-(n/p);
        c+=(n/b)-(n/p);
        if(c>=k)
        cout<<"Win"<<"\n";
        else
        cout<<"Lose"<<"\n";
    }
    return 0;
}
