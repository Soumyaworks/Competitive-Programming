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
    ll t,n,j,i,k,p,c,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        ll f,d;
        c=0;p=0;
        while(q--)
        {
            cin>>f>>d;
            c+=abs(p-f);
            c+=abs(f-d);
            p=d;
        }
        cout<<c<<"\n";
    }
    return 0;
}
