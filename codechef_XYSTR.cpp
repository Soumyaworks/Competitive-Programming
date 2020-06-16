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
    ll t,i,j,k,p,c,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        c=0;
        i=1;
        n=s.length();
        while(i<n)
        {
            if(s[i]=='x' && s[i-1]=='y' || s[i]=='y' && s[i-1]=='x')
            {
                c++;
                i+=2;
            }
            else
            i++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
