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
    int t,n,x,i,j,k,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        int a[n];
        int odd=0,even=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        int flag=0;
        for(i=1;i<=x;i+=2)
        {
            p=x-i;
            if(i<=odd && p<=even)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
