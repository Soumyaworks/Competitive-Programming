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

bool check(ll a[],ll pre[],ll p,ll n,ll s)
{
    //int w_sum=pre[p-1];
    ll w_sum=0;
    for(ll i=0;i<p;i++)
    w_sum+=a[i];
    //cout<<"w_sum="<<w_sum<<"\n";
    if(w_sum>s)
    {
        return true;
        /*
        cout<<p<<"\n";
        f=1;
        break;
        */
    }
            for(ll i=p;i<n;i++)
            {
                w_sum+=a[i];
                w_sum-=a[i-p];
                //cout<<"w_sum="<<w_sum<<"\n";
                if(w_sum>s)
                {
                    return true;
                }
            }
    return false;
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
    ll n,k,s,i,j,c,p;
    cin>>n>>k>>s;
    ll a[n],pre[n];
    c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        //c+=a[i];
        /*
        if(i==0)
        pre[i]=a[i];
        else
        {
            pre[i]=pre[i-1]+a[i];
        }
        */
        
    }
    
        //ll pre[n];
        //p=k+1;
        int f=0;
        ll low=k+1,high=n;
        j=-1;
        while(low<=high)
        {
            //cout<<"length="<<p<<"\n";
            p=(low+high)/2;
            if(check(a,pre,p,n,s)==true)
            {
                //cout<<p<<"\n";
                //break;
                j=p;
                high=p-1;
            }
            else
            {
                low=p+1;
            }
            
        }
        cout<<j;
    
    

    return 0;
}
