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


vector<int> bfs(vector<vector<int>>&adj,int n,int s)
{
    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n), p(n);
    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if (!used[u]) {
                used[u] = true;
                q.push(u);
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    return d;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int t,n,x,i,j,k,p,c,u1,u2;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        vector<vector<int>>adj(n);
        x--;
        for(i=0;i<n-1;i++)
        {
            cin>>u1>>u2;
            u1--;
            u2--;
            adj[u1].pb(u2);
            adj[u2].pb(u1);
        }
        vector<int>dist;
        dist=bfs(adj,n,x);
        int flag=0;
        /*
        cout<<"Dist array :\n";
        for(auto it:dist)
            cout<<it<<" ";
        cout<<"\n";
        */
        if(adj[x].size()<=1)
            flag=1;
        else
        {
            if(n%2==0)
                flag=1;
            else
                flag=0;
        }
        if(flag==1)
            cout<<"Ayush"<<"\n";
        else
            cout<<"Ashish"<<"\n";

        adj.clear();
    }
    return 0;
}
