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
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    ll t,i,j,k,c,p,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unordered_map<ll,ll>mymap;
        for(i=0;i<n;i++)
        {
            cin>>k;
            mymap[k]++;
        }
        c=0;
        for(auto it:mymap)
        {
            if(it.se>c)
            c=it.se;
        }
        cout<<c<<"\n";
    }
    return 0;
}