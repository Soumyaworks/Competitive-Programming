#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp> 
#pragma GCC optimize("Ofast")
#define ll long long int
#define pb push_back
#define mp make_pair
#define ld long double
#define fi first
#define se second
#define mod 1000000007
#define fill(a,x) memset(a,x,sizeof(a))
#define indexed_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
using namespace __gnu_pbds;

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
        ll a[n][n];
        ll r1=0,r2=n-1,c1=0,c2=n-1;
        p=1;
        i=j=0;
        while(p<=n*n)
        {
            a[i][j]=p++;
            if(i==r1 && j<c2)
            j++;
            else if(j==c2 && i<r2)
            i++;
            else if(i==r2 && j>c1)
            j--;
            else if(j==c1 && i>r1)
            i--;
            if(i==r1 && j==c1)
            {
                r1++;
                r2--;
                c1++;
                c2--;
                i=r1;
                j=c1;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
