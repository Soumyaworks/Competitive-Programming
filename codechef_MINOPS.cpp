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
    ll t,l,i,j,k,p,c,n;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s;
        cin>>r;
        n=s.length();
        c=0;
        k=0;
        l=0;p=0;
        ll f=0;
        vector<ll>v;
        j=0;
        ll q=0;
        for(i=0;i<n;i++)
        {
            if(s[i]!=r[i])
            {
                q=1;
                k++;
                f=1;
                if(j>0)
                v.pb(j);
                j=0;
            }
            else
            {
                if(k>0)
                p++;
                l+=k;
                k=0;
                f=0;
                if(q==1)
                j++;
            }
        }
        if(f==1)
        {
            p++;
            l+=k;
        }
        
        c=p*l;
        sort(v.begin(),v.end());
        //cout<<"p="<<p<<" l="<<l<<"\n";
        //cout<<"Gaps:\n";
        for(auto it:v)
        {
            //cout<<it<<" ";
            p--;
            if(p==0)
            break;
            l+=it;
            c=min(c,p*l);
        }
        //cout<<"\n";
        cout<<c<<"\n";
        v.clear();
    }
    return 0;
}
