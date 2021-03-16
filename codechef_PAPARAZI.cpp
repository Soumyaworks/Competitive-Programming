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

double find_slope(ll x1,ll y1,ll x2,ll y2){
    return (double)((double)(y2-y1)/(double)(x2-x1));
}
void decrement(vector<pair<ll,ll>>&v2){
    v2.pop_back();
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
    ll t;
    cin>>t;
    while(t--){
        ll n,i,j,k;
        cin>>n;
        ll m=LLONG_MIN;
        ll ind;
        vector<ll>h(n);
        vector<pair<ll,ll>>v1,v2,v3;
        for(i=0;i<n;i++){
            cin>>h[i];
            v1.pb(mp(h[i],i+1));
            if(h[i]>m)    
            {
                m=h[i];
                ind=i;
            }
            if(i<2)
            v2.pb(mp(h[i],i+1));
        }
        ll d1=0,d2=0,d3=1;
        i=0;
        ll f=0;
        ll x=2;
        while(i<ind-1){
            for(j=i+1;j<ind;j++){
                double y1=h[i]+((double)((h[ind]-h[i])/(ind-i))*(j-i));
                if(y1>=(double)h[j])
                continue;
                else
                {
                    d1=max(d1,abs(j-i));
                    f=1;
                    i=j;
                    break;
                }
            }
            if(j==ind)
            break;
        }
        //if(f==0)
        d1=max(d1,abs(ind-i));
        f=0;
        i=n-1;
        while(i>ind+1){
            for(j=i-1;j>ind;j--){
                double y1=h[i]+((double)((h[ind]-h[i])/(ind-i))*(j-i));
                if(y1>=(double)h[j])
                continue;
                else
                {
                    d2=max(d2,abs(j-i));
                    f=1;
                    i=j;
                    break;
                }
            }
            if(j==ind)
            break;
        }
        d2=max(d2,abs(ind-i));
        //cout<<max(d1,d2)<<"\n";
        while(x<n){
            while(true){
                if(v2.size()<2)
                break;
                else if(find_slope(v2[v2.size()-1].se,h[v2[v2.size()-1].se-1],v2[v2.size()-2].se,h[v2[v2.size()-2].se-1])<=find_slope(x+1,h[x],v2[v2.size()-1].se,h[v2[v2.size()-1].se-1])){
                    decrement(v2);
                }
                else
                break;
            }
            v2.pb(mp(h[x],x+1));
            d3=max(d3,abs(v2[v2.size()-1].se-v2[v2.size()-2].se));
            x++;
        }
        d1=max(d1,max(d2,d3));
        cout<<d1<<"\n";
    }
    return 0;
}