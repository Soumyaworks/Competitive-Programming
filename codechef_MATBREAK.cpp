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

ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,n,a,i,j,k,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        c=0;
        if(a==0)
        cout<<0<<"\n";
        else
        {
        for(i=1;i<=n;i++)
        {
            p=binpow(a,2*i-1,mod);
            c+=p%mod;
            a=(a*p)%mod;
        }
        cout<<c%mod<<"\n";
        }
    }
    return 0;
}
