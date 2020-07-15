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
    ll t,n,i,k,j,c,p,x,y,q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll a[n];
        //a[0]=0;
        indexed_set S;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            S.insert(a[i]);
        }
        //sort(a,a+n);
        cin>>q;
        while(q--)
        {
            cin>>x>>y;
            c=0;
            p=x+y;
            k=0;
            if(p==0)
            cout<<0<<"\n";
            else
            {
            
                j=S.order_of_key(p);
                if(a[j]!=p)
                cout<<j<<"\n";
                else
                {
                    cout<<-1<<"\n";
                }
            }
        }
        S.clear();
    }
    return 0;
}
