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
    ll t,i,j,k,p,c,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string sl,sr;
        n=s.length();
        sl=s.substr(1,n-1)+s[0];
        sr=s[n-1]+s.substr(0,n-1);
        //cout<<"sl="<<sl<<" sr="<<sr<<"\n";
        if(sl==sr)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}
