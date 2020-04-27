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
    ll t,n,i,j,k,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        sort(a,a+n);
        ll c1=0,c2=0;
        ll m=LLONG_MAX;
        for(i=1;i<n;i++)
        {
            m=min(m,abs(a[i]-a[i-1]));
        }
        cout<<m<<"\n";
    }
    return 0;
}
