#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
#define ll long long int
ll color[100005];
ll size;
void dfs_visit(vector<vector<ll>>&vect,ll u)
{
    ll i;
    size++;
    color[u]=1;
    for(i=0;i<vect[u].size();i++)
    {
        if(color[vect[u][i]]==0)
            dfs_visit(vect,vect[u][i]);
    }
    color[u]=2;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,x,y,k,p,c,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        //int a[p][2];
        vector<vector<ll>>v(n);
        for(i=0;i<p;i++)
        {
        //cin>>a[i][0]>>a[i][1];
            cin>>x>>y;
            x--;
            y--;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        //vector<vector<int>>v;
        /*
        for(i=0;i<n;i++)
        {
            for(j=0;j<v[i].size();j++)
            cout<<v[i][j]<<" ";
            cout<<"\n";
        }*/
        //vector<ll>sizes;
        for(i=0;i<100005;i++)
        color[i]=0;
        ll comp=0,mul=1;size=0;
        for(i=0;i<n;i++)
        {
            if(color[i]==0)
            {
                size=0;
                dfs_visit(v,i);
                //sizes.push_back(size);
                //res+=sum*size;
                //sum+=size;
                comp++;
                mul=(mul*size)%M;
            }
        }
        /*
        for(i=0;i<sizes.size();i++)
        cout<<sizes[i]<<" ";
        cout<<"\n";
        /*
        for(i=0;i<sizes.size();i++)
        {
         res=res+sum*sizes[i];
            sum=sum+sizes[i];
        }*/
        cout<<comp<<" "<<mul<<"\n";
    }
    return 0;
}
