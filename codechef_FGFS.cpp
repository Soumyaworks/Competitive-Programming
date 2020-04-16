#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define fill(a,x) memset(a,x,sizeof(a))
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    ll t,i,j,k,p,c,n,s,f;
    cin>>t;
    //multimap<ll,ll>mymap;
    while(t--)
    {
        cin>>n>>k;
        //ll a1[k];
        unordered_map<ll,ll>mymap;
        vector<pair<ll,pair<ll,ll>>>v;
        for(i=0;i<n;i++)
        {
            cin>>s>>f>>p;
            //mymap.insert(mp());
            v.pb(mp(f,mp(s,p)));
            mymap[p]=0;
        }
        sort(v.begin(),v.end());
        /*
        cout<<"Vector :"<<"\n";
        for(auto it:v)
        {
            cout<<it.fi<<" "<<it.se.fi<<" "<<it.se.se<<"\n";
        }
        */
        c=0;
        i=0;
        for(auto it:v)
        {
            if(i==0)
            {
                c++;
                mymap[it.se.se]=it.fi;
            }
            if(mymap[it.se.se]<=it.se.fi)
            {
                c++;
                mymap[it.se.se]=it.fi;
            }
            i++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
