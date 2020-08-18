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
    int t,i,j,k,c,h,p,n;
    cin>>t;
    while(t--)
    {
        cin>>h>>p;
        int f=0;
        while(true)
        {
            h=h-p;
            p=p/2;
            if(h<=0)
            {
                f=1;
                break;
            }
            else if(p<=0)
            break;
        }
        if(f==1)
        cout<<"1"<<"\n";
        else
        cout<<"0"<<"\n";
    }
    return 0;
}
