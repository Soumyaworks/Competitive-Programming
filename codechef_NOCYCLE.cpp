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

void dfs_visit(vector<vector<int>>&v,int u,vector<bool>&visited)
{
    //cout<<"u="<<u<<"\n";
    visited[u]=true;
    for(auto it:v[u])
    {
        if(visited[it]==false)
        dfs_visit(v,it,visited);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    int n,m,i,j,k,c,p,x,y;
    cin>>n>>m;
    vector<vector<int>>v(n);
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        x--;
        y--;
        v[x].pb(y);
        v[y].pb(x);
    }
    vector<bool>visited(n,false);
    c=0;
    for(i=0;i<n;i++)
    {
        if(visited[i]==false)
        {
            dfs_visit(v,i,visited);
            c++;
        }
    }
    //cout<<"c="<<c<<"\n";
    cout<<(m-n+c)<<"\n";
    return 0;
}
