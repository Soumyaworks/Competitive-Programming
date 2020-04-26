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
    ll t,a,b,x,y,i,j,k,p,c;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        cin>>a>>b;
        c=0;
        if(x==0 && y==0)
            cout<<0<<"\n";
        else
        {
            j=abs(x-y);
            p=a*j+b*min(x,y);
            k=a*x+a*y;
            c=min(p,k);
            cout<<c<<"\n";
        }
    }
    return 0;
}
