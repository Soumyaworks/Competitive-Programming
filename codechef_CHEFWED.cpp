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
    /*
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif 
    */
    //cout<<"Hello World"<<"\n";
    int t,n,k1,k,i,j,p;
    ll c;
    cin>>t;
    while(t--)
    {
        cin>>n>>k1;
        ll x=n,y=n-1;
        int si=100;
        int dp_mat[si+1][si*10+1];
        fill(dp_mat,0);
        int f[n];
        int mat[n+1][n+1];
        fill(mat,0);
        c=LLONG_MAX;
        for(i=0;i<n;i++)
        cin>>f[i];
        unordered_map<int,int>mymap;
        i=0;
        while(i<n)
        {
            for(k=i;k<n;k++)
            {
                if(k==0)
                {
                    mat[i][k]=0;
                }
                else
                mat[i][k]=mat[i][k-1];
            
            if(mymap.find(f[k])!=mymap.end())
            {
                if(mymap[f[k]]==(x-y))
                    mat[i][k]+=(x-y);
                mat[i][k]=mat[i][k]+(x-y);
            }
            mymap[f[k]]=mymap[f[k]]+(x-y);
            }
            mymap.clear();
            i++;
        }
        k=0;
        while(k<=si)
        {
            for(i=0;i<n;i++)
            dp_mat[k][i]=0;
            k++;
        }
        k=1;
        while(k<=n)
        {
            dp_mat[1][k]=mat[0][k-1];
            k++;
        }
        j=2;
        while(j<=si)
        {
            dp_mat[j][1]=0;
            j++;
        }
        i=2;
        while(i<=si)
        {
            for(k=2;k<=n;k++)
            {
                x=LLONG_MAX;
                j=1;
                while(j<k)
                {
                    y=mat[j][k-1]+dp_mat[i-1][j];
                    x=min(x,y);
                    j++;
                }
                dp_mat[i][k]=x;
            }
            i++;
        }
        i=1;
        while(i<=si)
        {
            x=dp_mat[i][n]+i*k1;
            c=min(x,c);
            i++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
