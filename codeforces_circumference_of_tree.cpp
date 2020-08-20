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
// Here, in this problem, pi is assumed to be 3 as per question

vector<int> bfs(int s,vector<vector<int>>&v,int n)
{
    int i,j,k,c,p;
    vector<int>d(n),visited(n,0);
    queue<int>Q;
    Q.push(s);
    visited[s]=1;
    d[s]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int x:v[u])
        {
            if(visited[x]==0)
            {
                Q.push(x);
                d[x]=d[u]+1;
                visited[x]=1;
            }    
        }
    }
    return d;
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
    int n,i,j,k,c,p,x,y;
    cin>>n;
    vector<vector<int>>v(n);
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        --x;
        --y;
        v[x].pb(y);
        v[y].pb(x);
    }
    vector<int>d1(n),d2(n);
    d1=bfs(0,v,n);
    /*
    cout<<"first distance array:"<<"\n";
    for(auto it:d1)
    cout<<it<<" ";
    cout<<"\n";
    */
    c=INT_MIN;
    int s;
    for(i=0;i<n;i++)
    {
        if(d1[i]>c)
        {
            c=d1[i];
            s=i;
        }
    }
    int ans=0;
    //ans+=c;
    d2=bfs(s,v,n);
    ans=*max_element(d2.begin(),d2.end());
    cout<<3*ans<<"\n";
    return 0;
}
