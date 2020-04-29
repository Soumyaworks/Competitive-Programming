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
        set<ll,greater<ll>>S;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            S.insert(a[i]);
        }
        if(S.empty())
        cout<<0<<"\n";
        else
        {
            c=0;
            for(auto it:S)
            {
                if(it%2!=0)
                S.erase(it);
                else
                {
                    S.insert(it/2);
                    S.erase(it);
                    c++;
                }
            }
            cout<<c<<"\n";
        }
    }
    return 0;
}
