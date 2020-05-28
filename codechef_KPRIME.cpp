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

int dp[6][100005];
vector<bool>prime(100005,true);
unordered_map<int,int>mymap;
void modified_sieve()
{
    int i,j;

    prime[0]=prime[1]=false;
    for(i=2;i<100005;i++)
    {
        //mymap[i]=0;
        if(mymap[i]==0)
        {
            //mymap[i]=1;
            for(j=i;j<100005;j+=i)
                {
                    prime[j]=false;
                    mymap[j]++;
                }
        }
    }
}
//Call sieve(n) from main for prime nos in [1,n]
/*
int count_prime(int n)
{
    int i,c=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0 && prime[i])
        c++;
    }
    return c;

}*/
void precompute()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<100005;j++)
        {
            if(i==0||j==0)
            dp[i][j]=0;
            else
            {
                    if(mymap[j]==i)
                        dp[i][j]=1+dp[i][j-1];
                    else
                        dp[i][j]=0+dp[i][j-1];

            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout<<"Hello World"<<"\n";
    int t,i,j,k,p,c,n,a,b;
    cin>>t;
    modified_sieve();
    precompute();
    while(t--)
    {
        cin>>a>>b>>k;
        cout<<(dp[k][b]-dp[k][a-1])<<"\n";
        /*
        c=0;
        for(i=a;i<=b;i++)
        {
            if(mymap[i]==k)
                c++;
        }
        */
        //cout<<c<<"\n";
    }
    return 0;
}
