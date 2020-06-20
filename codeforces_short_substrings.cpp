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
    int t,j,i,k,p,c,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        i=0;
        n=s.length();
        string a;
        while(i<n)
        {
            if(i==0||i==n-1)
            {
                a+=s[i];
                i++;
            }
            else
            {
                a+=s[i];
                i+=2;
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}
