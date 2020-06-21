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

ll calculateMex(set<ll>&S)
{
    ll Mex = 1;

    while (S.find(Mex) != S.end())
        Mex++;

    return (Mex);
}
int main()
{
    //cout << "Hello world!" << endl;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,i,j,k,c,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        ll a[n],b[n+1];
        //fill(b,0);
        ll x1,x2;
        //x1=LLONG_MAX;
        //x2=LLONG_MIN;
        x1=x2=m;
        ll flag=0;
        set<ll>S;
        p=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=m)
            {
                S.insert(a[i]);
                p++;
            }
        }
        k=calculateMex(S);
        if(k!=m)
            p=-1;
        cout<<p<<"\n";
    }
    return 0;
}
