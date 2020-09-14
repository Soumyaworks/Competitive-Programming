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
#define mod2 1000000005
#define fill(a,x) memset(a,x,sizeof(a))
#define indexed_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
using namespace std;
using namespace __gnu_pbds;

// Attributes : https://cp-algorithms.com/algebra/binary-exp.html
// Defintion for a Linked List
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    //ListNode *head=new ListNode();
    //ListNode *ptr1,*ptr2;
};

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    //TreeNode *root=new TreeNode();
};

ll modpow(ll a,ll b,ll m)
{
    a=a%m;
    ll r=1;
    while(b>0)
    {
        if(b&1)
        r=r*a%m;
        a=a*a%m;
        b>>=1;
    }
    return r;
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
    ll t,i,j,k,n,p,c1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll c[n];
        set<ll>S;
        unordered_map<ll,ll>mymap;
        ll f=0;
        for(i=0;i<n;i++)
        {
            cin>>c[i];
            mymap[c[i]]++;
        }
        c1=0;
        k=*max_element(c,c+n);
        if(n==1)
        cout<<2<<"\n";
        else{
        /*
        for(auto it:mymap)
        {
            
            
            
                j=it.se;
                S.insert(it.se);
            
            c1++;
        }
        
        if(c1==1)
        cout<<2<<"\n";
        else{
        if(S.size()!=1)
        f=1;
        if(f==1)
        cout<<modpow(2,n,mod)<<"\n";
        else
        {
            p=modpow(2,n,mod);
            k=n*j;
            cout<<p-k<<"\n";
        }
        }
        */
        if(mymap[k]&1)
        {
            p=modpow(2,n,mod)%mod;
            p=(p<0)?(p+mod)%mod:p;
            cout<<p<<"\n";
            //cout<<modpow(2,n,mod)%mod<<"\n";
        }
            
        else
        {
            j=1;
            i=0;
            while(i<(ll)min(mymap[k]/2,mymap[k]-(mymap[k]/2)))
            {
                j=j%mod;
                p=(mymap[k]-i);
                j=(j*p)%mod;
                p=modpow(i+1,mod2,mod)%mod;
                ll x=(j*p)%mod;
                j=x;
                i++;
            }
            j%=mod;
            p=modpow(2,n-mymap[k],mod)%mod;
            p=(p*j)%mod;
            j=modpow(2,n,mod)%mod-p;
            j=(j<0)?(j+mod)%mod:j;
            cout<<j<<"\n";

            //cout<<(modpow(2,n,mod)-p)<<"\n";
        }
        }
    }
    return 0;
}
