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

vector<ll>prime(1000000,1);
void sieve(ll n)
{
    ll i,j;

    prime[0]=prime[1]=0;
    for(i=2;i*i<=n;i++)
    {
        if(prime[i]==1)
        {
            for(j=i*i;j<=n;j+=i)
                prime[j]=0;
        }
    }
}
//Call sieve(n) from main for prime nos in [1,n] 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,i,j,k,p,c,n;
    sieve(1000000);
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=1;i<=n;i++)
        {
            if(prime[i])
            c+=i;
        }
        cout<<c<<"\n";
    }   
    return 0;
}