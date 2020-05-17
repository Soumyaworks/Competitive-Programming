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
    int n,q,i,j,k,p,c;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    cin>>q;
    while(q--)
    {
        int L,R;
        cin>>L>>R;
        L--;
        R--;
        sort(a+L,a+R+1);
        k=0;
        for(i=L+1;i<=R;i++)
        {
            k+=(a[i]-a[i-1])*(a[i]-a[i-1]);
            a[i-1]=b[i-1];
        }
        a[i-1]=b[i-1];
        cout<<k<<"\n";
        
    }
    return 0;
}
