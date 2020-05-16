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
    ll n,m,i,j,k,p,c;
    cin>>n>>m;
    unordered_map<string,string>mymap1;
    unordered_map<string,ll>mymap2,mymap3;
    string s1,s2;
    for(i=0;i<n;i++)
    {
        cin>>s1>>s2;
        mymap1[s1]=s2;
    }
    for(i=0;i<m;i++)
    {
        cin>>s1;
        mymap2[s1]++;
        mymap3[mymap1[s1]]++;
    }
    ll m1=0,m2=0;
    for(auto it:mymap2)
    {
        if(it.se>m1)
        {
            m1=it.se;
            //if(it.se==m1 && s1>it.fi)
            s1=it.fi;
        }
        else if(it.se==m1)
        {
            if(s1>it.fi)
            s1=it.fi;
        }
    }
    for(auto it:mymap3)
    {
        if(it.se>m2)
        {
            m2=it.se;
            //if(it.se==m2 && s2>it.fi)
            s2=it.fi;
        }
        else if(it.se==m2)
        {
            if(s2>it.fi)
            s2=it.fi;
        }
    }
    cout<<s2<<"\n"<<s1;
    return 0;
}
