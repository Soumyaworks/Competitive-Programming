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
    ll k,t,n,i,j,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n/2;
        if(k%2!=0)
            cout<<"NO"<<"\n";
        else
        {
            cout<<"YES"<<"\n";
            c=0;
            j=2;
            for(i=1;i<=n/2;i++)
            {
                cout<<j<<" ";
                c+=j;
                j+=2;
            }
            j=1;
            p=0;
            for(i=1;i<=n/2-1;i++)
            {
                cout<<j<<" ";
                p+=j;
                j+=2;
            }
            cout<<(c-p)<<"\n";
        }
    }
    return 0;
}
