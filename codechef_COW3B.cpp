#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll int
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
    ll t,n,m,i,j,k,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<ll>a;
        for(i=0;i<n;i++)
        {
            cin>>k;
            a.pb(k);
        }
        cin>>m;
        vector<ll>b;
        unordered_map<ll,ll>mymap;
        for(i=0;i<m;i++)
        {
            cin>>k;
            b.pb(k);
            mymap[k]++;
        }
        c=0;p=0;
        for(i=0;i<n;i++)
        {
            if(mymap[a[i]]>0)
            {
                p++;
            }
            else
            {
                //p=0;
                if(p>0)
                c++;
                p=0;
            }
        }
        if(p>0)
        c++;
        cout<<c<<"\n";
    }
    return 0;
}
