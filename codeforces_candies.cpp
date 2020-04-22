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
    ll t,n,i,j,k,x,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=2;
        p=(ll)pow(2,k)-1;
        while(n%p!=0)
        {
            k++;
            p=(ll)pow(2,k)-1;
        }
        cout<<n/p<<"\n";
    }
    return 0;
}
