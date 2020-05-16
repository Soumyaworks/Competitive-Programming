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
    ll t,n,i,j,k,p,c,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>z;
        ll a[n];
        priority_queue<ll>pq;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            pq.push(a[i]);
        }
        //sort(a,a+n,greater<ll>());
        c=0;
        ll f=0;
        
        while(z>0)
        {
            k=pq.top();
            pq.pop();
            if(k==0)
            {
                f=1;
                break;
            }
            z=z-k;
            k=k/2;
            pq.push(k);
            c++;
        }
        if(f==0)
        cout<<c<<"\n";
        else
        cout<<"Evacuate"<<"\n";
    }
    return 0;
}
