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
    ll t,n,k,i,j,p,c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            //a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-k;i++)
        {
            if(b[i]==a[i])
            continue;
            else{
            j=i+k;
            while(j<n)
            {
                if(b[j]==a[i])
                {
                    swap(b[j],b[i]);
                    break;
                }
                j=j+k;
            }
            if(j>=n)
            break;
            }
        }
        if(i==n-k)
        cout<<"yes"<<"\n";
        else
        cout<<"no"<<"\n";
    }
    return 0;
}
