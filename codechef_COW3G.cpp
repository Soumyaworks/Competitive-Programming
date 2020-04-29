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
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll x=LLONG_MIN;
    sort(a,a+n,greater<ll>());
    //submitting to check just
    for(i=1;i<n-1;i++)
    {
        p=a[i]*a[i-1];
        p=p/__gcd(a[i],a[i-1]);
        x=max(x,p);
    }
    cout<<x<<"\n";
    return 0;
}
